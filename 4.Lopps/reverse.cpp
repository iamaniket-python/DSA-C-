#include<iostream>
using namespace std;

int main() {

    int x=2344;
    int res=0;

    while (x >0) {
        int y= x % 10;
        res=res * 10 +y;
        x/=10;
    }
    cout<<res<<endl;
}