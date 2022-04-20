#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    
    cout << "Min element: " << *min_element(vec.begin(), vec.end());

    cout << "\nMax element: " << *max_element(vec.begin(), vec.end());

    return 0;
}