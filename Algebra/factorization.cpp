#include <iostream>

using namespace std;

#define lli long long int

int print_factors(lli N) {
    int count = 0;

    cout << "Factors of " << N << " are: ";
    for (int i = 1; i <= N; i++)
        if (N % i == 0) {
            cout << i << " ";
            count ++;
        }
    cout << "\n";

    return count;
}

int main() {

    const int n = 12;
    int count = print_factors(n);

    cout << "There are " << count << " factors of " << n << "\n";

    return 0;
}