// Write a function to calculate the sum of digits of a number.
// 🔢 Example: Input = 123 → Output = 6

#include<iostream>
using namespace std;

int sumofdigit(int n) {
    int sum= 0;
    while (n>0) {
        sum =sum +(n %10);
        n= n/10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout<<"Enter a number"<<sumofdigit(num);
    return 0;
}