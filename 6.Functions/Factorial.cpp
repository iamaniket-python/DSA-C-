#include<iostream>
using namespace std;

int fact(int n) {
    int  fact =1;
    for (int i=1; i<=n; i++) {
        fact= fact * i;

    }
    return fact;
}
int main() {
    int a;
    cout<<"Enter a first Number";
    cin>>a;

    cout<<"Fact is "<< fact(a);
    return 0;
}