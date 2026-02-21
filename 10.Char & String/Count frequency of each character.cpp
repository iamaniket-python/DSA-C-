#include <iostream>
using namespace std;

void frequency(string str) {
    int freq[256] ={0};

    //count
    for (int i=0; i<str.length(); i++) {
        freq[str[i]]++;
    }
        for (int i = 0; i < 256; i++) {
            if (freq[i] > 0) {
                cout << char(i) << " : " << freq[i] << endl;
            }
        }
    }

int main() {
    string str="Aniket srivastava";
    frequency(str);
    return 0;
}