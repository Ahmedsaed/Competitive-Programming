#include <iostream>

using namespace std;

int main()
{
    // Natural numbers
    // All positive integers starting from 1
    // 1,2,3,4,5,6,7,8,...
    
    // Sum of first n natural numbers is (n*(n+1))/2

    const int n = 5;
    cout << "the sum of first " << n << " natural numbers is: " << (n*(n+1))/2 << "\n";

    return 0;
}