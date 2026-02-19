#include<iostream>
#include<cstring>
using namespace std;

bool ispalidrome(char str[], int n) {
    int st=0;
    int end=n-1;
    while (st<end) {
        if (str[st++] != str[end--]) {
            cout<<"not valid";
            return false;
        }
    }
    cout<<"Valid";
    return true;
}
int main() {
    char word[20];
    cout<<"enter the word"<<endl;
    cin>>word;

    ispalidrome(word,strlen(word));
    return 0;
};
