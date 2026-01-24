#include<iostream>
using namespace std;

void Subarray(int *arr, int n) {
    for (int start=0; start<n; start++) {
        for (int end=start; end<n; end++) {
            for (int i= start; i<=end; i++) {
                cout<<arr[i];
            }
        }
        cout<<","<<endl;;
    }
    cout<<endl;
}
int main() {
    int arr[6]={1,2,3,4,5,6};
    int n =6;
    Subarray(arr,n);
    return 0;
}