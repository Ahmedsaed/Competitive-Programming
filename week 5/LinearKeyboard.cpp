#include <cmath>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int t, i ,j; 
    cin >> t;

    map<char, int> keyboard;
    char ch;
    string word;
    int time;

    while (t--)
    {
        time = 0;

        for (i = 0; i < 26; i++)
        {
            cin >> ch;
            keyboard[ch] = i;
        }

        cin >> word;

        for (j = 1; j < word.length(); j++)
        {
           time += abs(keyboard[word[j - 1]] - keyboard[word[j]]);
        }

        cout << time << endl;
    }
    
}