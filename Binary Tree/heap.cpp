#include <iostream>
#include <vector>

using namespace std;

void min_heapify(vector<int> &arr, int idx) {
    int N = arr.size();
    if (idx >= N)
        return;
    
    int left  = 2*idx + 1;
    int right = 2*idx + 2;
    int smallest = idx;
    
    if(left < N && arr[left] < arr[smallest] )
        smallest = left;
    if(right < N && arr[right] < arr[smallest] )
        smallest = right;
    
    if(smallest != idx) { // Case 2 and 3
        swap(arr[idx], arr[smallest]);
        min_heapify(arr, smallest);
    } 
}

int pop(vector<int> &arr) {
    int root = arr[0];
    int N = arr.size();

    swap(arr[0], arr[N-1]);
    arr.pop_back();
    min_heapify(arr, 0);

    return root;
}

int main() {
    // heap
    vector<int> arr = {3, 6, 9, 10, 14, 10, 11, 17, 21, 16, 20, 13};

    cout << "Heap before popping: ";
    for (auto it : arr) cout << it << " "; cout << "\n"; 

    cout << "Popped integer: " << pop(arr) << "\n";
    
    cout << "Heap after popping: ";
    for (auto it : arr) cout << it << " "; cout << "\n"; 

    return 0;
}