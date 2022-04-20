#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    cout << "The summation of vector elements is: " << accumulate(vec.begin(), vec.end(), 0); // (first itr, last itr, initial value)

    return 0;
}