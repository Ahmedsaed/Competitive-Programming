#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0, count = 0;
    cin >> n;
    cin.ignore(10, '\n');

    string d, c;

    getline(cin, d);

    c = d;  

    for (int k = 0; k < n; k++)
    {

        for (int i = 0; i < n; i++)
        {
            if (d[i] == 'L' && i > 0 && c[i-1] == '.')
            {
                if (i > 1)
                {
                    if (d[i-2] == 'R')
                    {
                        c[i-1] = '.';
                    }
                    else
                    {
                        c[i-1] = 'L';
                    }
                    
                }
                else
                {
                    c[i-1] = 'L';
                }
            } 
            else if (d[i] == 'R' && i < n - 1 && c[i+1] == '.')
            {
                if (i < n - 2)
                {
                    if (d[i+2] == 'L')
                    {
                        c[i+1] = '.';
                    }
                    else
                    {
                        c[i+1] = 'R';
                    }
                    
                }
                else
                {
                    c[i+1] = 'R';
                }
            }
        }

        d = c;
    }
    
    for (int j = 0; j < n; j++)
        if (d[j] == '.')
            count++;

    cout << count << endl;
}