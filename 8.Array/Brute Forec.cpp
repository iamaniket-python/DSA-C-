#include<iostream>
using namespace std;

void maxSubarray(int *arr, int n) {
    int maxsum= INT_MIN;
    for (int start=0; start<n; start++) {
        for (int end=start; end<n; end++) {
            int currSum=0;
            for (int i=start; i<=end; i++) {
                currSum +=arr[i];
            }
            cout<<currSum;
            maxsum=max(maxsum,currSum);
        }
        cout<<endl;
    }
    cout<<"Maximun Number="<<maxsum<<endl;
}
int main() {
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxSubarray(arr,n);
    return 0;
}
