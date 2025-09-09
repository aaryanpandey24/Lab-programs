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
void BalPar(char Exp[])
{
    Stack s;
    initialize(s);
    int i=0,flag=0;
    while (Exp[i]!='\0')
    {
        /* code */
        if(Exp[i]=='('|| Exp[i]=='{'|| Exp[i]=='[')
        {
        Push(s,Exp[i]);
        }
        else if(Exp[i]==')'|| Exp[i]=='}'|| Exp[i]==']')
        {
            if(!IsEmpty(s))
            Pop(s);

            else
            flag=1;
        }
        i=i+1;
    }
    if(IsEmpty(s))
    {
        if(flag==1)
        cout<<"Invalid Expression";
        else
        cout<<"Valid Expression";

    }
    else
    cout<<"Invalid Expression";
    
    
}

int main() {
    char ch[100];
    cout<<"Enter a expression";
    cin >> ch;
    BalPar(ch);
    return 0;
    
}
