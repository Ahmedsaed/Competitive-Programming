#include <iostream>
#include <vector>

using namespace std;
#define N 5

int main() {
    vector<int> nums = {1, 2, 4, 8, 16};

    // prefix sum (accumulative sum)
    vector<int> sum(N);
    sum[0] = nums[0];
    for(int i = 1; i < N; i++)
        sum[i] = sum[i - 1] + nums[i];

    // Subarray sum = sum[right] - sum[left]
    int left = 1, right = 3;
    int ans = sum[right];

    if (left > 0)
        ans -= sum[left - 1];

    cout << "Subarray sum: " << ans << " ";
    return 0;
}