// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:

// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.
// Example 3:

// Input: s = "luffy is still joyboy"
// Output: 6
// Explanation: The last word is "joyboy" with length 6.

#include <iostream>
#include <string>
using namespace std;

// Well, the basic idea is very simple. Start from the tail of s and move backwards to find the first non-space character.
// Then from this character, move backwards and count the number of non-space characters until we pass over the head of s
// or meet a space character. The count will then be the length of the last word.

int lengthOfLastWord(string s)
{
    int len = 0, tail = s.length() - 1;
    // first while is just to remove any white space at the end of last word so proper counting can begin in the next while
    while (tail >= 0 && s[tail] == ' ')
        tail--;
    while (tail >= 0 && s[tail] != ' ')
    {
        len++;
        tail--;
    }
    return len;
}

int main()
{
    cout << lengthOfLastWord("heav");

    return 0;
}