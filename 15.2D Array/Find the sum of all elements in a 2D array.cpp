// Find the sum of all elements in a 2D array.
#include<iostream>
using namespace std;

int main() {
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        };
    int sum=0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
                sum += arr[i][j];
            }
        }
        cout << "Total sum = " << sum;
        return 0;
    }
