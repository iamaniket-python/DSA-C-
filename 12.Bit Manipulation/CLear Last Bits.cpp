#include<iostream>
using namespace std;

void CLearlastbit(int num, int i) {
    int bitmask=(~0)<<i;
    num =num & bitmask;

    cout<<num <<endl;
}
int main() {
    CLearlastbit(15,2);
    return 0;
};
