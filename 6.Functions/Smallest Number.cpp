// Write a function that finds the smallest element in an array.

#include<iostream>
using namespace std;

int minNum(int arr[], int size) {

    int small=arr[0];
    for (int i=0; i<size; i++) {
        if (arr[i] < small) {
            small =arr[i];
        }
    }
    return small;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);
    cout << "Sammlest numbers is = " <<  minNum(arr, size);
    return 0;
}