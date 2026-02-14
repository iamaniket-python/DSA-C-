// Find the sum of diagonal elements.
#include<iostream>
using namespace std;

int main() {
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    int sum=0;

    for (int i=0; i<3; i++) {
        sum += arr[i][i];

    }
    cout<<"Sum of the diagonal ="<<sum;
    return sum;
}