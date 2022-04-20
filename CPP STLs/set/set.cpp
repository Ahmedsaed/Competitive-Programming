#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main() {

    set<int> st1; // Sorts the elements in ascending order

    st1.insert(40);
    st1.insert(30);
    st1.insert(60);
    st1.insert(20);
    st1.insert(50);

    cout << "\nSt1: ";
    for (auto i : st1) cout << i << " ";

    set<int, greater<int>> st2(st1.begin(), st1.end()); // Sorts the elements in descending order

    cout << "\nSt2: ";
    for (auto i : st2) cout << i << " ";

    unordered_set<int> st3; // Doesn't sort the elements

    st3.insert(40);
    st3.insert(30);
    st3.insert(60);
    st3.insert(20);
    st3.insert(50);

    cout << "\nSt3: ";
    for (auto i : st3) cout << i << " ";

    cout << "\nlower bound of 40 in st1 is: " << *st1.lower_bound(40); 
    cout << "\nlower bound of 41 in st1 is: " << *st1.lower_bound(41); 

    cout << "\nupper bound of 40 in st1 is: " << *st1.upper_bound(40); 
    cout << "\nupper bound of 41 in st1 is: " << *st1.upper_bound(41); 

    st1.clear();

    cout << "\nIs st1 empty: " << st1.empty();
    cout << "\nSize of st2: " << st2.size();

    st2.erase(30);
    st2.erase(60);

    cout << "\nSt2: ";
    for (auto i : st2) cout << i << " ";

    cout << "\n";
    if (st2.find(40) != st2.end()) cout << "40 is found in set 2";
    else cout << "40 is not found in set 2";

    return 0;
}