// COUNTING SORT = use a frequency count of elements from min to max

#include <iostream>
#include <climits>
using namespace std;

void countingsort(int arr[], int n) {
    int min_val = INT_MAX, max_val = INT_MIN;

    
    for (int i = 0; i < n; i++) {
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);
    }

    int range = max_val - min_val + 1;
    int freq[10000] = {0};  

    // frequency array
    for (int i = 0; i < n; i++) {
        freq[arr[i] - min_val]++;
    }

   
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (freq[i] > 0) {
            arr[index++] = i + min_val;
            freq[i]--;
        }
    }
}

int main() {
    int arr[8] = {4, 2, 2, 8, 3, 3, 1, 0};
    int n = 8;

    countingsort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
