#include <iostream>

using namespace std;

void print_prime_factors(int N) {
    cout << "The Prime Factors of " << N << " are: ";
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            cout << i << " ";
            while (N % i == 0) 
                N /= i;
        }
    }
    if (N > 1)
        cout << N << " ";
    cout << "\n";
}

int main() {
    // Any integer can be represented as the product of a power of primes
    // 1 = 2^0 * 3^0
    // 2 = 2^1 * 3^0
    // 3 = 2^0 * 3^1
    // 4 = 2^2 * 3^0
    // ...
    // 3087 = 2^7 * 3^2

    const int n = 207;

    print_prime_factors(n);

    return 0;
}