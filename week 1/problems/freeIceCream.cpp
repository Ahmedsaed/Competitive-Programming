#include <iostream>

using namespace std;

int main()
{
    unsigned long long x = 0;
    int n = 0, d = 0, ds = 0;
    char op;

    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> op >> d;

        if (op == '+')
        {
            x += d;
        }
        else if (op == '-')
        {
            if (x >= d)
            {
                x -= d;
            }
            else
            {
                ds++;
            }
        }
    }

    cout << x << ' ' << ds;
}