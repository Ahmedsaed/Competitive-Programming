// C++ STLs | Vectors
// reference: https://www.geeksforgeeks.org/vector-in-cpp-stl

#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int> vect;

    // push_back
    vect.push_back(2);
    vect.push_back(5);
    vect.push_back(8);
    vect.push_back(9);

    // begin
    cout << *vect.begin() << endl;

    // size
    cout << vect.size() << endl;

    // empty
    cout << vect.empty() << endl;

    // reference operator
    cout << vect[0] << endl;
    cout << vect[1] << endl;
    cout << vect[2] << endl;

    // front and back
    cout << vect.front() << endl;
    cout << vect.back() << endl;

    // pop_back
    vect.pop_back();

    // clear
    vect.clear();
}