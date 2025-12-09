// Given an integer array nums, return true if any value appears at least twice in the array,
// and return false if every element is distinct.
//
// Input:
// nums = [1, 2, 3, 4]
// Output:
// false
//
// Input:
// nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
// Output:
// true

#include<iostream>
#include <algorithm>

using namespace std;

bool duplicatenumber(int arr[], int n) {
    sort(arr, arr + n);
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            return true;
        }
    }
    return false;
}
int main() {
    int arr[] = {1,2,2,3,3,4,4,5,5};
    int n = sizeof(arr) / sizeof(int);

    if(duplicatenumber(arr, n)) {
        cout << "Duplicate exists";
    }
    else {
        cout << "No duplicates";
    }

    return 0;
}