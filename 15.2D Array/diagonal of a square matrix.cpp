// diagonal of a square matrix.
#include<iostream>
using namespace std;

int main() {
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    cout<<"Main Diagonal=";
    for (int i=0; i<3; i++) {
        cout<<arr[i][i]<<" ";
    }
    return 0;
}



