#include<iostream>
using namespace std;

int main() {
    int n=5;
    int z=1;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i; j++) {
            cout<< "  ";
        }

        for (int j=1; j<=n*2; j++) {
            cout<< z++;
        }
        cout<< endl;
    }

    return 0;
}