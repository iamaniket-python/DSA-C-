#include<iostream>
using namespace std;

int main() {

    int x;
    cout<<"Enter a number";
    cin>>x;
    bool isprime= true;

    for (int i=2; i<= x-1; i++) {
        if ( x % i ==0) {
            isprime=false;
            break;
        }
    }
    if (isprime) {
        cout<<"Number is prime"<<endl;
    }else {
        cout<<"Number is not prime"<<endl;
    }

}
