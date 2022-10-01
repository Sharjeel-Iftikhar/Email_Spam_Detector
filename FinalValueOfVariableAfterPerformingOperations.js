// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

// Input: operations = ["--X","X++","X++"]
// Output: 1
// Explanation: The operations are performed as follows:
// Initially, X = 0.
// --X: X is decremented by 1, X =  0 - 1 = -1.
// X++: X is incremented by 1, X = -1 + 1 =  0.
// X++: X is incremented by 1, X =  0 + 1 =  1.

var finalValueAfterOperations = function (operations) {
  let count = 0;
  for (let i of operations) {
    if (i === '++X' || i === 'X++') count++;
    else count--;
  }
  return count;
};
