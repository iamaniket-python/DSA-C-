// Reverse a string
#include <iostream>
using namespace std;

void reverseString(string &str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main() {
    string str = "Aniket Shrivastava";
    reverseString(str);
    cout << str;
    return 0;
}