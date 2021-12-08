#include<iostream>
#include<set>

using namespace std;

int main()
{
    int k;
    cin >> k;

    char lt;
    set<int> lts;

    while (k--)
    {
        cin >> lt;
        lts.insert(tolower(lt));
    }
    
    if (lts.size() == 26)
        cout << "YES";
    else
        cout << "NO";
}