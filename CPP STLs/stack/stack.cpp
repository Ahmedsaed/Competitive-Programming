#include <iostream>
#include <stack>

using namespace std;

int main() 
{
    stack<int> stk;

    // push
    stk.push(5);
    stk.push(4);
    stk.push(6);
    stk.push(7);
    stk.push(3);
    stk.push(1);

    // pop
    stk.pop();

    // top
    cout << stk.top() << endl;

    // size
    cout << stk.size() << endl;

    // empty
    cout << stk.empty() << endl;
}