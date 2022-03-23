#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, int> coord = {1, 10};
    pair<int, int> coord2(2 ,5);
    pair<string, pair<int, int> > var("abc", {4, 5});

    int x = coord.first, y = coord.second;

    cout << x;

    return 0;
}