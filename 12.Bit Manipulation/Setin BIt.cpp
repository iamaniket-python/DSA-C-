// # SETBIT


#include<iostream>
using namespace std;

int setBit(int num, int i) {
    int bitMask = 1 << i;
    return (num |bitMask);
}
int main() {
    cout<<setBit(6,2);
    return 0;
}