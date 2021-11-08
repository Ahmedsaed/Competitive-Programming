#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    string sum;
    priority_queue<int, vector<int>, greater<int>> order;

    cin >> sum;

    for (int i = 0, n = sum.length(); i < n; i += 2)
    {
        order.push(sum[i] - '0');
    }

    for (int i = 0, n = order.size() - 1; i < n; i++)
    {
        cout << order.top() << '+';
        order.pop();
    }
    cout << order.top();
}