#include<iostream>
using namespace std;

int main() {
    int n=4;
    int dig =1;

    for (int i=1; i<=4; i++) {
        for ( int j=1; j<=i; j++) {
            cout << dig++;
        }
        cout<< endl;
    }
    return 0;
}

// output
// 1
// 23
// 456
// 78910