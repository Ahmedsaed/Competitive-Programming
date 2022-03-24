#include <iostream>
#include <string>

using namespace std;

bool check_palindrome(string s) {
    for (int i = 0, j = s.length() - 1; i < j; i++, j--)
        if (s[i] != s[j])
            return false;
    return true;
}

int main() {
    string str1 = "madam", str2 = "racecar", str3 = "radecar";
    cout << boolalpha;
    cout << "Is string \"" << str1 << "\" palindrome: " << check_palindrome(str1) << "\n"; 
    cout << "Is string \"" << str2 << "\" palindrome: " << check_palindrome(str2) << "\n"; 
    cout << "Is string \"" << str3 << "\" palindrome: " << check_palindrome(str3) << "\n"; 

    return 0;
}