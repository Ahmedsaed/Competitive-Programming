#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, int> num;
    int n, i, k;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> k;
        num[k]++;    
    } 

    n = 0, i = 0;
    for (auto it : num)
    {
        if (it.second > n) n = it.second;
    }

    cout << n << endl;
}