#include <iostream>

using namespace std;

int factorial(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++)
        result *= i;

    return result;
}

int main() {
    const int n = 5;

    cout << "Factorial of " << n << " is " << factorial(n) << "\n";

    return 0;
}