// C++ STLs | priority queue
// reference: https://www.geeksforgeeks.org/priority-queue-in-cpp-stl

#include <iostream>
#include <queue>
 
using namespace std;

int main()
{
    priority_queue<int> pqu;

    // push
    pqu.push(5);
    pqu.push(4);
    pqu.push(7);
    pqu.push(6);
    pqu.push(9);

    // size
    cout << pqu.size() << endl;

    // top
    cout << pqu.top() << endl;

    // pop
    pqu.pop();

    // print priority queue
    while (!pqu.empty()) 
    {
        cout << pqu.top() << endl;
        pqu.pop();
    }

    // min heap for priority queue
    priority_queue <int, vector<int>, greater<int>> minpqu;

    minpqu.push(5);
    minpqu.push(4);
    minpqu.push(7);
    minpqu.push(6);
    minpqu.push(9);

    while (!minpqu.empty()) 
    {
        cout << minpqu.top() << endl;
        minpqu.pop();
    }
}