#include<iostream>
using namespace std;

int main() {

    int x;
    cout<<"Enter the number =";
    cin>>x;
    int res=0;
    for (int i=1; i<=10; i++){
        res= x* i;
        cout << x << " * " << i << " = " << x * i << endl;
    }

};