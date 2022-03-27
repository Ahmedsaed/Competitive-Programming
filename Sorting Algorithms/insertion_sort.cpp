// Time complexity: O(N^2)

#include <iostream>

using namespace std;

int main() {
    const int N = 6;
    int arr[N] = {6, 3, 5, 4, 1, 2};

    for (int i = 0; i < N; i++) {
        int j = i;
        while (j >= 1 && arr[j] < arr[j-1]) {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    for (int i = 0; i < N; i++) cout << arr[i] << " " << "\n";
    return 0;
}