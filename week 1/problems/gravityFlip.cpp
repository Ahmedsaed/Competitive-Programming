#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    int n, tmp;
    priority_queue<int, vector<int>, greater<int>> order;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        order.push(tmp);
    }

    for (int i = 0, n = order.size(); i < n; i++)
    {
        cout << order.top() << ' ';
        order.pop();
    }
}