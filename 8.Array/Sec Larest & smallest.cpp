#include<iostream>
#include<climits>
using namespace std;

void SecondLargest(int arr[], int n){

    // largest Number
    int Largest = INT_MIN;
    int SecLargest = INT_MIN;

    // smallest Number
    int smallest=INT_MAX;
    int SecSmallest =INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] > Largest){
            SecLargest = Largest;
            Largest = arr[i];
        }
        else if(arr[i] > SecLargest && arr[i] != Largest){
            SecLargest = arr[i];
        }
        if(arr[i] < smallest){
            SecSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > SecSmallest && arr[i] != smallest){
            smallest = arr[i];
        }
    }

    cout << "Second Largest Number = " << SecLargest << endl;
    cout << "Second Smallest Number = " << smallest << endl;
};

int main(){
    int arr[] = {23, 12, 45, 90, 34, 89};
    int n = sizeof(arr) / sizeof(int);
    SecondLargest(arr, n);
    return 0;
};
