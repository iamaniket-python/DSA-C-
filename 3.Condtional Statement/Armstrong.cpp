#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a number=";
    cin>> n;

    int y= n;

    int num1 = y % 10;
    y /=10;

    int num2 = y % 10;
    y /=10;

    int num3= y;

    int sum= num1* num1 * num1 + num2 * num2 * num2 +  num3 * num3 * num3;

    if (sum ==n) {
        cout<< n <<" is an armstrong number\n";
    }else {
        cout <<n << "is Not an Armstrong Number\n";
    }
    return 0;
};