// Copy elements of one array into another
#include<iostream>
using namespace std;

void copyArray(int src[], int desc[], int n) {
    for (int i=0; i<n; i++) {
        desc[i]=src[i];
    }
}

int main() {
    int arr1[7]={4,5,6,71,2,3,4};
    int arr2[7];

    copyArray(arr1,arr2,7);
    for (int i=0; i<7; i++) {
        cout<<"copy Array="<<arr2[i]<<" "<<endl;
    }
    return 0;
}