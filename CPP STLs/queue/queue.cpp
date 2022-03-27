#include <iostream>
#include <queue>
  
using namespace std;

int main()
{
    queue<int> qu;

    // push
    qu.push(1);
    qu.push(5);
    qu.push(8);
    qu.push(9);
    qu.push(11);
    qu.push(7);

    // pop
    qu.pop();

    // size
    cout << qu.size() << endl;
    
    // front
    cout << qu.front() << endl;
    
    // back
    cout << qu.back() << endl;

    // print the queue
    while (!qu.empty()) 
    {
        cout << qu.front() << endl;
        qu.pop();
    }
}