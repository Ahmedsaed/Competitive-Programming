/*
A subsequence of a sequence is obtained by deleting some or none of the elements without changing the order of elements
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Number of subsequences of a string of length N is (2^N)*2*N
    string str = "Hi Mom";

    int N = str.length();
    cout << "The number of subsequences of the string \"" << str << "\" is: " << pow(2, N)*2*N;

    return 0;
}