/*
Substring is a contiguous sequence of characters within a string
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // number of substrings in a string of length N is ((N*(N-1)/2) + N)
    string str = "Hi Mom";

    int N = str.length();
    cout << "The number of substrings of the string \"" << str << "\" is: " <<  ((N*(N-1)/2) + N);

    return 0;
}