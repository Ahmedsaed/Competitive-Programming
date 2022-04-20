#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    
    reverse(vec.begin(), vec.end());
    cout << "Reversed vector: ";
    for (int i : vec) cout << i << " ";
    cout << "\n";

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]);

    reverse(arr, arr+size);
    cout << "Reversed array: ";
    for (int i : arr) cout << i << " ";
    cout << "\n";

    return 0;
}