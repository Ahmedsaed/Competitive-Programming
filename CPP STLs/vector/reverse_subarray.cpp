#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 4, 3, 7, 9, 2};

    // reverse subarray
    int left = 1, right = 4;
    for(int p1 = left, p2 = right; p1 < p2; p1++, p2--)
        swap(nums[p1], nums[p2]);
    
    for (int i = 0; i < nums.size(); i++) // output: 1 9 7 3 4 2
        cout << nums[i] << " ";

    return 0;
}