#include <iostream>
using namespace  std;

int main() {
    int a,b,c;

    cout<<"Enter a first number";
    cin>>a;

    cout<<"Enter a second number";
    cin>>b;

    cout<<"Enter a third number";
    cin>>c;

    if (a>=b && a>=c) {
        cout<<"Largest is a =" <<a<<endl;
    }else if (b>=c){
        cout<<"Largest is b="<<b<<endl;
    }else {
        cout<<"Largest is c="<<c<<endl;
    }
    return 0;
}
