// C++ STLs | dequeue
// reference: https://www.geeksforgeeks.org/deque-cpp-stl


#include <iostream>
#include <deque>
  
using namespace std;

int main()
{
    deque<int> dqu;

    // push_front
    dqu.push_front(7);
    dqu.push_front(4);
    dqu.push_front(5);

    // push_back
    dqu.push_back(4);
    dqu.push_back(9);
    dqu.push_back(8);

    // size
    cout << dqu.size() << endl;

    // at
    cout << dqu.at(4) << endl;

    // front & back
    cout << dqu.front() << endl << dqu.back() << endl;

    // pop_front & pop_back
    dqu.pop_front();
    dqu.pop_back();

    // iterator 
    for (auto it = dqu.begin(); it != dqu.end(); it++)
    {
        cout << "   " << *it;
    }
}