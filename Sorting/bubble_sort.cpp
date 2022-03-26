// Time complexity: O(N^2)

#include <iostream>

using namespace std;

int main() {
    const int N = 6;
    int arr[6] = {6, 3, 5, 4, 1, 2};

    for (int i = 0; i < N; i++) { // skip comparing with last i elements
        for(int j = 1; j < N - i; j++) { 
            if (arr[j] < arr[j-1])
                swap(arr[j], arr[j-1]);
        }
    }

    for (int i = 0;i < N; i++) cout << arr[i] << " " << "\n";
    return 0;
}