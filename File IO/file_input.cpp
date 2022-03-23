#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream cin("input.txt");

    string data;
    cin >> data;

    cout << data << "\n";

    return 0;
}