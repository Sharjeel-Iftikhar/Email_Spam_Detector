// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false

#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s)
{
    // taking stack for keep tracking the order of the brackets..
    stack<char> st;
    // iterate over each and every elements
    for (auto i : s)
    {
        // if current element of the string will be opening bracket then we will just simply push it into the stack
        if (i == '(' or i == '{' or i == '[')
        {
            st.push(i);
        }
        // if control comes to else part, it means that current element is a closing bracket, so check two conditions  current element matches with top of the stack and the stack must not be empty...
        else
        {
            if (st.empty() or (st.top() == '(' and i != ')') or (st.top() == '{' and i != '}') or (st.top() == '[' and i != ']'))
            {
                return false;
            }
            else
            {
                // if control reaches to that line, it means we have got the right pair of brackets, so just pop it.
                st.pop();
            }
        }
    }
    // at last, it may possible that we left something into the stack unpair so return checking stack is empty or not..
    return st.empty();
}

int main()
{
    cout << isValid("((({[[{}]]})))");
    return 0;
}