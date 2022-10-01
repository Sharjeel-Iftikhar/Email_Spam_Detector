#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }

    double original = x;
    double remainder = 0;
    double reversed_num = 0;

    while (x != 0)
    {
        remainder = x % 10;
        reversed_num = reversed_num * 10 + remainder;
        x = x / 10;
    }

    if (original == reversed_num)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << isPalindrome(121);
    return 0;
}