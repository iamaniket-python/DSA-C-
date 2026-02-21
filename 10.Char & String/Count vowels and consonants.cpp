#include<iostream>
using namespace std;

void VowelsCount(string  str) {
    int vowels=0;
    int consonants=0;

    for (int i=0; i<str.length(); i++){
        char ch =tolower(str[i]);
        if (ch>'a' && ch<= 'z') {
            if (ch == 'a' || ch =='e' || ch =='i' || ch == 'o' || ch == 'u')
                vowels ++;
            else
                consonants++;


        }
    }
    cout<<"vowels="<<vowels<<endl;
    cout<<"consonants="<<consonants<<endl;
}
int main() {
    string str;
    cout<<"Enter a string= ";
    getline(cin,str);
    VowelsCount(str);

    return 0;
}