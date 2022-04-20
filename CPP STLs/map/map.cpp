#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> mp;

    // Diffrent ways to store data in a map
    mp.insert({1, 5});
    mp.insert(make_pair(4, 5));
    mp.insert(pair<int, int>(7, 8));
    mp[9] = 4;
    mp[2] = 15;
    mp[3] = 1;

    for (auto &&i : mp)
        cout << "Key: " << i.first << " | Value: " << i.second << endl;
    
    mp.erase(9);

    for (auto &&i : mp)
        cout << "Key: " << i.first << " | Value: " << i.second << endl;

    if (mp.find(1) != mp.end()) cout << "An element with key 1 is found and it's value is " << mp[1];
    else cout << "There is no element with a key of 1";

    mp.clear(); // Clear the map

    return 0;
}