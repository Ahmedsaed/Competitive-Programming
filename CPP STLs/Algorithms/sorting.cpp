// Time complexity O(NlogN)

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// compare function for sorting
int compare(int a, int b) {
    return a < b;
}

int main() {
    // sort array
    const int N = 8;
    int arr[N] = {5, 3, 6, 4, 8, 1, 7, 2};

    sort(arr, arr + N);
    for(int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
    // sort vector
    vector<int> vect{5, 3, 6, 4, 8, 1, 7, 2}; 
    sort(vect.begin(), vect.end());

    for(int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";
    cout << endl;
    // custom comparator
    const int N2 = 8;
    int arr2[N2] = {5, 3, 6, 4, 8, 1, 7, 2};

    sort(arr2, arr2 + N, compare);
    for(int i = 0; i < N; i++)
        cout << arr2[i] << " ";
}