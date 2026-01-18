// Write a function to sum all elements of an array.
// input={2,3,4,5} output= 14 ;
#include <iostream>
using namespace std;

int sumElements(int arr[],int size) {
    int digit=0;
    for (int i=0; i<size; i++) {
        digit+=arr[i];
    }
    return digit;
}
int main() {
    int arr[] ={2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< sumElements(arr,size);
    return 0;

};
