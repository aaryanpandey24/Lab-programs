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

void rev(char str[])
{
    Stack S;
    int i =0;
    initialize(S);
    while (str[i]!='\0')
    {
        Push(S,str[i]);
        /* code */
        i=i+1;
        
    }
    
    while(!IsEmpty(S))
    {
    int x= Pop(S);
    cout<<(char)x;
    
    }
    
}

int main() {
    char ch[100];
    cout<<"Enter a expression";
    cin >> ch;
    
    rev(ch);
    
    
    return 0;
    
}
