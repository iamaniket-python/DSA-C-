#include<iostream>
using namespace std;

int mininum(int arr[], int n) {
    int miniNum=arr[0];

    for (int i=1; i<n; i++) {
        if (arr[i] < miniNum) {
            miniNum =arr[i];
        }
    }
    return miniNum;
}
int main() {
    int arr[]={1,2,3,4,5,62,2};
    int n=sizeof(arr)/sizeof(int);

    cout<<"Minimum number =" << mininum(arr, n);
    return 0;
}