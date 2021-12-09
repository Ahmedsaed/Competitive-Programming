#include<iostream>
#include<cmath>
#include <map>

using namespace std;

int main()
{
    int powers[32], i = 0, k, j, l;
    long long count = 0;

    for (; i < 32; i++)
    {
        powers[i] = pow(2, i);
    }

    cin >> k;

    int x[k];
    map<int, int> frq;

    for (i = 0; i < k; i++)
    {
        cin >> x[i];
        frq[x[i]]++;    
    }

    for (i = 0; i < k; i++)
        for (l = 0; l < 32; l++)
        {
            j = (powers[l] - x[i]);
            count += frq[j];
            if (powers[l] == x[i]) count--;
        }
        
    cout << count/2;
}   