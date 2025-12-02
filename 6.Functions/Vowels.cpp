#include<iostream>
using namespace std;

int vowels(string s) {
   int count =0;
    for (int i=0; i<s.length(); i++) {
        char ch =tolower(s[i]);

        if ( ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u') {
            count ++;
        }
    }
    return count;
}

int main() {
    string ch;

    cout<<"Enter a string";
    cin>>ch;

    int res= vowels(ch);
    cout<<"Total Number is ="<< res;
    return 0;
}