// Find length of string without using strlen()
#include<iostream>
using namespace std;

int main() {
    string str="Aniket srivastava";
    int count =0;
    for (int i=0; str[i] != '\0'; i++) {
       count++;
    }
    cout<<count<<endl;
};
