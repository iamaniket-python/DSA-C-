#include<iostream>
using namespace std;

int main() {
    int x=123451;
    int rev=0;

    while (x>0) {
        int y = x % 10;
        cout<<y;
        x/=10;
    }

    cout<<endl;

}