// Input: n = 5
// Output: 10
// Explanation: The smallest multiple of both 5 and 2 is 10.

// https://leetcode.com/problems/smallest-even-multiple/discuss/2590557/Beginner-friendly-JavaJavaScriptPython-Solution
var smallestEvenMultiple = function (n) {
  return n % 2 == 0 ? n : n * 2;
};
