#include <iostream>
using namespace std;

int main() {
    int n=12345;
    int sum=0;
    while (n >0) {
        int lstdigit= n % 10;
        sum+=lstdigit;
        n= n /10;
    }
    cout<<"sum is ="<< sum<<endl;
}