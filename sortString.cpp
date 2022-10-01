#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sortString(string str)
{
    string sorted = str;
    sort(sorted.begin(), sorted.end());
    return sorted;
}
int main()
{
    cout << sortString("gdsgsg");
    return 0;
}