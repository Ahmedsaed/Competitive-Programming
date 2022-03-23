#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Geometric progression is a sequence of numbers such that each term after the first is obtained by multiplying the previous one by a fixed non-zero number
    // a, ar, ar^2, ar^3, ... , ar^{n-1}
    // Where the nth term = ar^{n-1}

    // The sum of GP with n terms is (a * (1 - r^n))/(1 - r)

    const float a = 3, r = 2, n = 4; // GP is 3, 6, 12, 24

    cout << " The sum of GP where a = " << a << ", r = " << r << ", n = " << n << " is " << (a * (1 - pow(r, n)))/(1 - r);


    return 0;
}