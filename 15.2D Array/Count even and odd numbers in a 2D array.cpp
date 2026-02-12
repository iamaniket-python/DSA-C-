// Count even and odd numbers in a 2D array.
#include<iostream>
using namespace std;

int main() {
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}};

    int evenCount=0;
    int oddCount=0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(arr[i][j] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
    }
            cout<<"Total Count="<<evenCount<<endl;
            cout<<"Total Odd count="<<oddCount<<endl;

            return 0;
}



