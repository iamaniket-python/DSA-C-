#include<iostream>
using namespace std;

int evenOdd(int arr[], int n) {


    for (int i=0; i<n; i++) {
        if (arr[i] % 2 ==0) {
            cout<< arr[i] <<" is even";
            return even;
        }else {
           return odd;
        }
    }
    return x;
}
int main() {
    int arr[]={2};
    int n=sizeof(arr)/sizeof(int);

    cout<<"nubmber is" << evenOdd(arr,n);

    return 0;
}