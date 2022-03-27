// Time complexity: O(NlogN)

#include <iostream>

using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int sz1 = mid - start + 1;
    int sz2 = end - mid;
    int L[sz1], R[sz2]; // temp arrays, we'll copy the 2 subarrays here

    for (int i = 0; i < sz1; i ++) L[i] = arr[i + start];
    for (int i = 0; i < sz2; i ++) R[i] = arr[i + mid + 1];

    // Merge sorted arrays L and R into arr[start...end]
    int l = 0, r = 0, a = start;
    while (l < sz1 && r < sz2) {
        if (L[l] < R[r])  
            arr[a++] = L[l++];
        else 
            arr[a++] = R[r++];
    }

    // one of L or R will exhaust first, we'll copy the remaining to arr
    while (l < sz1)  // R exhausted
        arr[a++] = L[l++];
    while (r < sz2)  // L exhausted
        arr[a++] = R[r++];
}

void merge_sort(int arr[], int start, int end) {
    if (start >= end)
        return;
    
    int mid = (start + end) / 2;
    
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);

    // Merge sorted arrays arr[start...mid] and arr[mid+1...end]
    merge(arr, start, mid, end);
}

int main() {
    const int N = 8;
    int arr[N] = {6, 3, 5, 1, 4, 8, 2, 7};

    merge_sort(arr, 0, N - 1);

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    return 0;
}