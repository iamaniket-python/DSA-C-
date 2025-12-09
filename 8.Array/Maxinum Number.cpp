#include<iostream>
using namespace std;

int maximum(int arr[], int n) {
    int maxnum= arr[0];

    for (int i=1; i<n; i++) {
        if (arr[i] > maxnum) {
            maxnum=arr[i];
        }
    }
    return maxnum;
}
int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << "Maximum: " << maximum(arr, n);
    return 0;
}
