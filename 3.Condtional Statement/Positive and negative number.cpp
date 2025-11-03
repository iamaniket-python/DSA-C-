#include <iostream>
using namespace std;

int main() {
    int a;

    cout<<"Enter a number=";
    cin>>a;

    if (a < 0) {
        cout<<"it is negative number"<<endl;
    }else if (a > 0) {
        cout<<"it is postive number"<<endl;
    }else {
        cout<<"it is zero"<<endl;
    }
}