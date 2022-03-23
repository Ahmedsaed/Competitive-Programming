#include <iostream>
#include <vector>
#include <algorithm>
  
using namespace std;
  
int main()
{
    vector<int> vect; // empty vector
    vector<int> v(5); // new vector of size 5
    vector<bool> v(5, true); // new vector of size 5 with all values initialized to true

    // push_back
    vect.push_back(2); // insert 2 at end of vector
    vect.push_back(5);
    vect.push_back(8);
    vect.push_back(9);

    vect.begin(); // get iterator to beginning
    vect.end(); // get iterator to end (theoretically, the element after the last element)

    // size
    cout << vect.size() << endl;

    // is_empty
    cout << vect.empty() << endl;

    // reference operator
    cout << vect[0] << endl;
    cout << vect[1] << endl;
    cout << vect[2] << endl;

    // front and back
    cout << vect.front() << endl;
    cout << vect.back() << endl;

    // erase
    vect.erase(vect.begin() + 4); //delete 4th element

    // sort and reverse
    sort(vect.begin(), vect.end()); //sort vector
    reverse(vect.begin(), vect.end()); // reverse the vector

    // pop_back
    vect.pop_back(); // delete last element

    // clear
    vect.clear();
}