#include <iostream>
#include <vector>

using namespace std;

#define N 6

int main() {
    vector<int> nums = {1, 4, 3, 7, 9, 2};

    vector<int> res(N);

    // Shift array clockwise by d
    const int d = 2;
    for (int i = N - d, j = 0; i < N; i++, j++) res[j] = nums[i]; // Shift the last d elements to the start
    for (int i = 0, j = d; i < N - d; i++, j++) res[j] = nums[i]; // Shift the rest by d


    for (int i = 0; i < N; i++) 
        cout << res[i] << " "; 

    return 0;
}