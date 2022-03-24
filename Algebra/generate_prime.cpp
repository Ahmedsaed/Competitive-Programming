/*
    
    Sieve of Eratosthenes:
    Is an efficient algorithm to generate prime numbers
    
    Steps:
        1- Create a list(array of booleans) of all numbers from 2 to N. Initially, all numbers are unmarked.

        2- Starting from p=2, we will mark all multiples of 2 less than or equal to N. These numbers are definitely not prime since 2 divides them.

        3- Move to the next unmarked number, i.e., p = 3. Mark all its multiples.

        4- Stop if p > sqrt(N)
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // For primes in range [1, N], Time complexity: O(N*log(logN))
    const int N = 30;
    vector<bool> is_prime(N + 1, true); // size is N+1 so we can access is_prime[N]
    
    for (int i = 2; i * i <= N; i++) {
        if (is_prime[i]) {
            for (int j = i + i; j <= N; j += i)
                is_prime[j] = false;
        }
    }

    cout << "Prime Numbers between 1 and " << N << " are: ";
    for (int i = 2; i <= N; i++) 
        if (is_prime[i])
            cout << i << " ";
    cout << "\n";

    // For primes in range [B, M], Time complexity: O((M-N)*log(logM))
    const long int M = 100000100, B = 100000000;
    vector<int> is_prime2(M-B+1, true);

    for (int i = 2; i * i <= M ; i++) {
        int start = (((B - 1) / i) + 1) * i;
        for (int j = start; j <= M ; j+= i) {
            if (j >= B && j <= M && j != i) 
                is_prime2[j - B] = false;
        }
    }

    cout << "Prime numbers between " << B << " and " << M << " are: ";
    for (int i = 0; i < is_prime2.size(); i++) {
        if (is_prime2[i])
        cout << i + B << " ";
    }
    cout << "\n";

    return 0;
}