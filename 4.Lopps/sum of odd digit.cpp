#include<iostream>
using namespace std;

int main() {

    int odd= 546578;
    int sum=0;

    while (odd>0) {
        int lastdig= odd %10;
        if (lastdig % 2 !=0) {
            sum+=lastdig;

        }
        odd = odd/10;
    }
        cout<<"summ is ="<<sum<<endl;
        return 0;

}