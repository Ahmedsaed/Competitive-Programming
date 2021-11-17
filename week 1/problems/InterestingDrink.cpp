#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nDays, nShops, i, coins, count;
    cin >> nShops;

    int prices[nShops];

    for(i=0; i < nShops; i++)
    {
        cin >> prices[i];
    }

    cin>>nDays;

    sort(prices, prices + nShops);

    while(nDays--)
    {
        cin >> coins;

        count = upper_bound(prices, prices + nShops, coins) - prices;

        cout << count << endl;
    }
}