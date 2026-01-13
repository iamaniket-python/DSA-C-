#include <iostream>
using namespace std;

int CountDigit(int arr[], int size) {
    int count = 0;

    for(int i = 0; i < size; i++) {
        count++;
    }

    return count;
}

int main() {
    int arr[] = {2, 3, 4, 5, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << CountDigit(arr, size);
    return 0;
}
