#include <iostream>
using namespace  std;

int main() {
    int a,b;
    char op;

    cout<<"Enter a first number =";
    cin>>a;

    cout<<"Enter a second number=";
    cin>>b;

    cout<<"Enter an operator=";
    cin>>op;

    switch (op) {
        case '+' : cout<<"A+b="<<(a+b)<<endl;
            break;
        case '-' : cout<<"A-b="<<(a-b)<<endl;
            break;
        case '*' : cout<<"A*b="<<(a*b)<<endl;
            break;
        case '/' : cout<<"A/b="<<(a/b)<<endl;
            break;
        default: cout<<"Invaid Operator";
    }
}