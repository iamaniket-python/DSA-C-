// Remove duplicate elements from array

#include<iostream>
using namespace std;

int RemoveDuplicate(int arr[], int n) {
    int num=0;
    for (int i=0; i<n; i++) {
        bool isduplicate=false;

        for (int j=0; j<num; j++) {
            if (arr[i] == arr[j]) {
                isduplicate=true;
                break;
            }
        }
        if (!isduplicate) {
            arr[num] =arr[i];
            num++;
        }
    }
    return num;
}
int main() {
    int arr[]={2,3,4,2,4,6,7,8,7};
    int n = sizeof(arr)/sizeof(int);

    n = RemoveDuplicate(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
