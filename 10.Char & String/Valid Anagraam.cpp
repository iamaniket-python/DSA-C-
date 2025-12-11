#include<iostream>
#include <string>

using namespace std;

bool isanagram(string str1, string str2) {
    if (str1.length() != str2.length()) {
        cout<<"Not valid";
        return false;
    }
    int count[26]={0};
    for (int i=0; i<str1.length(); i++) {
        int idx= str1[i]='a';
        count[idx]++;
}

    for (int i=0; i<26; i++) {
        if (count[i] !=0) {
            cout<<"Not valid";
            return false;
        }
    }

    cout<<"valid hai";
    return true;
}

int main() {
    string str1="cat";
    string str2="dog";
    isanagram(str1, str2);
    return 0;
}