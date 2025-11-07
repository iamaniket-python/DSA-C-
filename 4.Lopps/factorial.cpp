#include<iostream>
using namespace std;

int main() {

    int x=4;
    long double res=1;
    for (int i=1; i<=x; i++) {
        res *=i;
    }
    cout<<res<<endl;
}