// Write a function to print all elements of an array.
// input={2, 3, 4, 5, 7, 3} output={2, 3, 4, 5, 7, 3}

#include<iostream>
using namespace std;

int Allelements(int arr[],int size) {

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
int main() {
    int arr[] = {2, 3, 4, 5, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout <<Allelements(arr, size);
    return 0;
}