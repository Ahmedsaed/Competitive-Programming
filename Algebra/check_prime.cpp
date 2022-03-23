#include <iostream>

using namespace std;

bool is_prime(int N) {
    for (int i = 2; i * i <= N; i++)
        if (N % i == 0)
            return "no";
    return "yes";
}

int main() {

    const int n = 7;

    cout << boolalpha << "Primality test of " << n << " is " << is_prime(n);

    return 0;
}