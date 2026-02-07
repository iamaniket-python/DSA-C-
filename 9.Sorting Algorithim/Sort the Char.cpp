// Q- sort this array of chahracter using insertion sort in descending order
// out={w t p l f e d a}
#include<iostream>
using namespace std;

void print(char arr[], int n) {
    for (int i=0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
void sortchar(char arr[] ,int n) {
    for (int i=1; i<n; i++) {
        int curr =arr[i];
        int prev = i-1;

        while (prev>=0 && arr[prev] < curr) {
            swap(arr[prev], arr[prev +1]);
            prev--;
        }
        arr[prev +1] =curr;
    }
    print(arr,n);
}
int main() {
    char arr[8] = {'f','a','p','t','e','w','d','l'};

    sortchar(arr,8);
    return 0;
}