#include<bits/stdc++.h>
using namespace std;

// Reverse an array
// void rev1(int arr[], int l, int r) {
//     if(l >= r) {
//         return;
//     }
//     swap(arr[l], arr[r]);
//     rev1(arr, l + 1, r - 1);
// }

void rev2(int i, int arr[], int n) {
    if(i>=n/2) {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    rev2(i+1, arr, n);
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    // rev1(a, 0, n - 1);
    rev2(0, arr, n);


    // Display the reversed array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
