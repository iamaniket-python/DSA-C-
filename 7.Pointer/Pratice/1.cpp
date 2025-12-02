#include<iostream>
using namespace std;

int factorialNumber(int n) {
    int fact=1;

    for(int i=1; i<n; i++){
        fact= fact * i;

    }
    return fact;
}

int main() {
    int num;

    cout<<"ENter a number";
    cin>>num;

    int res= factorialNumber(num);
    cout<<"res is ="<<res;

    return 0;
}