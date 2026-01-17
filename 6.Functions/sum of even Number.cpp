// Write a function that returns the sum of all even numbers from 1 to n.
#include<iostream>
using namespace std;

int Sumeven(int arr[], int size) {

    int digit=0;
    for (int i=0; i<size; i++) {
        if (arr[i] % 2 ==0) {
            digit +=arr[i];

        }
    }
    return digit;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);

    cout << "Sum of even numbers is = " << Sumeven(arr, size);
    return 0;
}