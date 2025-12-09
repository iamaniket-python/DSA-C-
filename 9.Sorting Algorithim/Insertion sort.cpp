// INSERTION SORT =Pick an element from unsorted part & place it correctly in sorted part
#include<iostream>
using namespace std;

void print(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout<< arr[i] <<" ";
    }
}

void insertinsort(int arr[], int n) {
    for (int i=1; i<n; i++) {
        int curr =arr[i];
        int prev =i-1;
        while ( prev>=0 && arr[prev]> curr) {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    print(arr,n);

}
int main() {
    int arr[5]={5,4,3,2,1};
    insertinsort(arr,5);
    return 0;
}