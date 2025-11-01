#include <iostream>
using namespace std;

int main() {

    int p;
    int r;
    int t;

    cout<<"Enter principal =";
    cin>>p;

    cout<<"Enter a rate=";
    cin>>r;

    cout<<"enter a time";
    cin>>t;

    int simpel=(p*r*t)/100;
    cout<<"the simpel interest is="<<simpel;
}