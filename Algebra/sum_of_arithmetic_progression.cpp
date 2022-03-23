#include <iostream>

using namespace std;

int main() {
    // Arithmetic progression is a sequence of numbers such that the difference between each consecutive term is constant
    // a, a + d, a + 2d, ..., a + (n − 1)d
    // where nth term a_n = a + (n - 1)d

    // Sum of AP with n terms is (n/2)(2a + d(n - 1))

    const float a = 2, d = 3, n = 5; // AP is 2, 5, 8, 11, 14

    cout << " The sum of AP where a = " << a << ", d = " << d << ", n = " << n << " is " << (n/2) * (2*a + d*(n - 1));

    return 0;
}