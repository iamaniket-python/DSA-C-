#include <iostream>
using namespace std;

void printarr(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};

    bubblesort(arr, 5);

    printarr(arr, 5);

    return 0;
};
