#include <iostream>
using namespace std;

int sum(int a, int b) {
    return (a*a)+(b*b) + 2 * a*b;
}
int main() {
    int a ,b;
    cout<<"Enter first Number (a)=";
    cin>>a;
    cout<<"Enter second number (b)=";
    cin>>b;

    cout<<"result is =" <<sum(a,b);
    return 0;
}