// palidrome number
#include <iostream>
using namespace std;
bool Palindrome(int num) {
    int original = num;
    int rev = 0;
    while (num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if (original == rev) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int num;
    cout << "Enter a number = ";
    cin >> num;
    if (Palindrome(num)) {
        cout << "Palindrome number";
    } else {
        cout << "Not a palindrome number";
    }
    return 0;
}
