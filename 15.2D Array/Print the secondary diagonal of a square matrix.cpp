// Print the secondary diagonal of a square matrix.
#include<iostream>
using namespace std;

int main() {
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    int n=4;
    cout<<"Main Diagonal=";
    for (int i=0; i<n; i++) {
        cout<<arr[i][n-1-i]<<" ";
    }
    return 0;
};

