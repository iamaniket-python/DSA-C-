// Selection sort => Pick the smallest(from unsorted) & put in the beginning

#include<iostream>
using namespace std;

void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minidx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minidx]) {
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }
}

void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {8,9,7,5,2};

    selectionsort(arr, 5);

    printarr(arr, 5);

    return 0;
}