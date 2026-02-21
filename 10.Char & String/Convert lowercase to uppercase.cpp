#include<iostream>
using namespace std;

int main() {
    string str="Aniket srivastava";

    for (int i=0; i<str.length(); i++) {
         str[i]= toupper(str[i]);
        cout<<str[i];
        }
   return 0;
    }
