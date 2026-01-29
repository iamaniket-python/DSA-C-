#include<iostream>
using namespace std;

void maxSum(int *arr, int n) {
    int max_sum= INT_MIN;

    for (int i=0; i<n; i++) {
        int currSum=0;

        for (int j =i; j<n; j++) {
            currSum +=arr[j];
           max_sum=max(max_sum,currSum);
        }
    }
    cout<<"Maximum sum="<<maxSum<<endl;
}
int main() {
    int arr[7]={-2,-3,6,7,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxSum(arr,n);
    return 0;
}