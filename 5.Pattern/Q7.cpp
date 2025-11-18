#include<iostream>
using namespace std;

int main() {
    int n=10;


    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<" ";
        }
        for (int j=1; j<=2 *i-1; j++) {
            cout<< " * ";
        }
        cout<< endl;
    }
    for (int i=n; i>=n; i--) {
        for (int j=1; j<=2*n-i; j++) {
            cout<<" ";
        }
        for (int j=1; j<=2*i+2; j++) {
            cout<< " * ";
        }
        cout<< endl;
    }
    for (int i=n; i>=1; i--) {
        for (int j=1; j<=n+i; j++) {
            cout<<" ";
        }
        for (int j=i; j<=3 * i; j++) {
            cout<< " * ";
        }
        cout<< endl;
    }
}