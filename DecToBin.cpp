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

void DecimalToBinary(int N)
{
    int r,x;
    Stack S;
    initialize(S);
    while (N!=0)
    {
        r = N%2;
        Push(S,r);
        N=N/2;
    }    
        
        while(!IsEmpty(S))
        {
            x=Pop(S);
            cout<<x;
        }
        
        /* code */
    
    

}

int main() {
    int n;
    cout<<"Enter a number";
    cin>>n;
    DecimalToBinary(n);
    return 0;
    
}
