#include<iostream>
using namespace std;

int Number(int arr[], int n) {
    int largest=arr[0];
    int smallest=arr[0];

    for (int i =1; i <n; i++) {
        if (arr[i]> largest)
            largest=arr[i];
        if (arr[i]<smallest)
            smallest=arr[i];
    }
    cout<<"Largest nUmber="<<largest<<endl;
    cout<<"Smallest Number="<<smallest<<endl;
};
int main() {

    int arr[]={2,3,4,5,6,7};
    int n= sizeof(arr)/ sizeof(int);
    Number(arr,n);
    return 0;
}