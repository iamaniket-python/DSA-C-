#include <algorithm>
#include<iostream>
using namespace std;

bool isSoreted(int arr[],int n, int i) {
    if (i == n-1) {
        return true;
    }
    if (arr[i]> arr[i+1]) {
        return false;
    }
    return isSoreted(arr, n ,i+1);
}
int main() {
    int arr1[5] ={1,2,3,4,5};
    int arr2[5]={1,2,4,5,3};

    cout<<isSoreted(arr1,6,0)<<endl;
    cout<<isSoreted(arr2,5,0)<<endl;
    return 0;
};
