#include <iostream>
using namespace std;

#define STACKSIZE 50

struct Stack {
    int TOP;
    int item[STACKSIZE];
};

void initialize(Stack &S) {
    S.TOP = -1;
}

bool IsEmpty(Stack &S) {
    return (S.TOP == -1);
}

void Push(Stack &S, int x) {
    if (S.TOP == STACKSIZE - 1) {
        cout << "Stack Overflows" << endl;
        exit(1);
    } else {
        S.TOP++;
        S.item[S.TOP] = x;
    }
}

int Pop(Stack &S) {
    if (IsEmpty(S)) {
        cout << "Stack Underflows" << endl;
        exit(1);
    } else {
        int x = S.item[S.TOP];
        S.TOP--;
        return x;
    }
}

int STACKTOP(Stack &S) {
    if (IsEmpty(S)) {
        cout << "Stack is empty" << endl;
        exit(1);
    }
    return S.item[S.TOP];
}

void DecimalToAnyBase(int N,int b)
{
    
    int r,x;
    Stack S;
    char DAT[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    initialize(S);
    
    while (N!=0)
    {
        r = N%b;
        Push(S,r);
        N=N/b;
    }    
        
        while(!IsEmpty(S))
        {
            x=Pop(S);
            cout<<DAT[x];
        }
        
        /* code */
    cout<<endl;
    

}

int main() {
    int N;
    cout<<"Enter a number and a base";
    cin>>N;
    DecimalToAnyBase(N,2);
    DecimalToAnyBase(N,8);
    DecimalToAnyBase(N,16);
    
    return 0;
    
}
