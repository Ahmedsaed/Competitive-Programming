#include <iostream>

using namespace std;

int main() {
    const int n = 4;

    if (n % 4 == 0)
        cout << "even" << "\n";
    else
        cout << "odd" << "\n";

    return 0;
}