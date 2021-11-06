#include <iostream>

using namespace std;

int main()
{
    int y = 0, k = 0, n = 0;
    bool found = false;

    cin >> y >> k >> n;

    // x + y <= n
    for (int x = k - y % k, max = n - y; x <= max; x += k)
    {
        // (x + y) % k == 0
        if ((x + y) % k == 0)
        {
            cout << x << " ";
            found = true;
        }
    }

    // If there are no such values of x print a single integer -1
    if (found == false)
    {
        cout << "-1";
    }
}