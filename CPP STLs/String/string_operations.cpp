#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hi Mom";
    
    // Append
    str.append(".");
    str.push_back(' ');
    str += "I am writing code.";

    cout << str << "\n";

    // erase
    str.erase(str.end() - 1); // delete last item
    str.erase(0, 8); // delete first 5 characters

    cout << str << "\n";
    
    // substring
    cout << str.substr(5, 7) << "\n"; 

    return 0;
}