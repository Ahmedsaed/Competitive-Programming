#include <iostream>

using namespace std;

int main() {
    int a = 7;
    int b = 4;
    int M = max(a, b); // 7
    int K = min(a, b); // 4

    cout << "Max: " << M << "\n" << "Min: " << K << "\n";
}