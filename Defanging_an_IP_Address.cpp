// A defanged IP address replaces every period "." with "[.]".

// Example 1:

// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"

#include <iostream>
#include <string>
using namespace std;

string defangIPaddr(string address)
{
    string result;
    for (auto ch : address)
    {
        if (ch == '.')
            result = result + "[.]";
        else
            result = result + ch;
    }
    return result;
}

int main()
{
    cout << defangIPaddr("1.1.1.1");

    return 0;
}