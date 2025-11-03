#include <iostream>
using namespace std;

int main() {

    int year;
    cout<<"Enter a year:";
    cin>> year;

    if ( year % 400 == 0) {
        cout<<"it is leap year";

    }else {
        cout<<"It is not leap year";
    }
};