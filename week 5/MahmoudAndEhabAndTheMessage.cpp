#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // the number of words in their language, the number of groups of words, and the number of words in Mahmoud's message respectively
    int n, k, m, i, j, x, z = 0;
    cin >> n >> k >> m;
    unsigned long long cost = 0;

    string words[n], tmp;
    for (i = 0; i < n; i++)
        cin >> words[i];

    map<string, int> lan;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        lan[words[i]] = j;
    }

    while (k--)
    {
        cin >> x;
        int grp[x];
        for (i = 0; i < x; i++)
        {
            cin >> j;
            grp[i] = j - 1;
            if (z == 0)
                z = lan[words[j - 1]];
            else if (z > lan[words[j - 1]])
                z = lan[words[j - 1]];
        }

        for (i = 0; i < x; i++)
            lan[words[grp[i]]] = z;

        z = 0;
    }
    
    while (m--)
    {
        cin >> tmp;
        cost += lan[tmp];
    }
    
    cout << cost;
}