// # GETBIT


#include<iostream>
using namespace std;

int getBit(int num, int i) {
    int bitMask=1 <<i;
    if (!(num & bitMask)) {
        return 0;
    }else {
        return 1;
    }
}
int main() {
    cout<<getBit(6,2);
    return 0;
}