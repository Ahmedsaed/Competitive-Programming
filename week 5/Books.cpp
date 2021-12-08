#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, t, tmp, nb = 0, total = 0, k = 0, i, j;
    cin >> n >> t;
    int time[n];

    for(i = 0; i < n; i++)
    {
        cin >> tmp;
        time[i] = tmp;
    }

    for(j = 0; j < n; j++) 
    {
        total += time[j];
        
        if(total <= t)
        {
            nb++;
        }
        else
        {
            total -= time[k];
            k++;
        }
    }

    cout << nb;
}