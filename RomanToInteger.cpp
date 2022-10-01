// Input: s = "III"
// Output: 3
// Explanation: III = 3.

// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.

// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int romanToInt(string str)
{
    unordered_map<char, int> map{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };
    int ans = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (map[str[i]] < map[str[i + 1]])
        {
            ans = ans - map[str[i]];
            // ans-=mp[str[i]];
        }

        else
        {
            // ans+=mp[str[i]];
            ans = ans + map[str[i]];
        }
    }
    return ans;
}
int main()
{
    cout << romanToInt("MCMXCIV");
    return 0;
}