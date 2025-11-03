#include <iostream>
using namespace std;

int main(){

    int num;
    float tax;
    cout<<"Enter a number";
    cin>>num;

    if(num < 5){
        tax=0;
    }else if (num < 10){
        tax =0.2 * num;
    }else{
        tax = 0.3 * num;
    }
    cout<<"Tax ="<<(tax * 100000)<<endl;
    return 0;
}