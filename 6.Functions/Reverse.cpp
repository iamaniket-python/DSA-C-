#include <iostream>
using namespace std;

string reverseString(string s) {
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string result = reverseString(str);
    cout << "Reversed: " << result;
    return 0;
}
