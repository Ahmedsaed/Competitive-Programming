#include <iostream>
#include <vector>
#include <utility> // pair is defined in this library

using namespace std;

int main()
{
    vector<pair<pair<int,int>,pair<int,int>>> v;
    for (auto it : v) {
        // do something
    }

    return 0;
}