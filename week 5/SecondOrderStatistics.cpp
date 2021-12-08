#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> st;

    int k, n;
    cin >> k;

    while(k--)
    {
        cin >> n;
        st.insert(n);
    }

    if (st.size() == 1) 
    {
        cout << "NO";
    }
    else
    {
        n = *next(st.begin(), 1);
        cout << n;
    }
}