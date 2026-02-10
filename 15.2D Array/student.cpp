#include<iostream>
using namespace std;

int main() {
    int arr[5][3];
    int n=3, m=4;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
};
