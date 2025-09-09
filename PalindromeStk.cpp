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

void Palindrome(char str[])
{
    Stack S;
    int i =0,x;
    bool a;
    initialize(S);
    while (str[i]!='\0')
    {   Push(S,str[i]);
        i=i+1;
        

        /* code */
    }
    i=0;
    while (!IsEmpty(S))
    {   x=Pop(S);
        if(str[i]==x)
        {
            i=i+1;
        a=true;
        }
        /* code */
        else
        a=false;
    }

    if (a==true)
    {
        cout<<"Palindrome";
        
        /* code */
    }
    else
    cout<<"Not Palindrome";
    
    
    
}

int main() {
    char ch[100];
    cout<<"Enter a expression";
    cin >> ch;
    Palindrome(ch);
    
    
    return 0;
    
}
