// Write a function that counts vowels in a given string.
#include<iostream>
#include<string>
using namespace std;

int Vowelss(string n) {
    int count = 0;

    for (int i = 0; i <= n; i++) {
        if (n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u') {
            count++;
        }
    }
    return count;
}
int main() {
    int s;
    cout<<"ENter a name=";
    cin>>s;
    cout << "Number of vowels = " << Vowelss(s);
    return 0;

}