// Input: n = 234
// Output: 15
// Explanation:
// Product of digits = 2 * 3 * 4 = 24
// Sum of digits = 2 + 3 + 4 = 9
// Result = 24 - 9 = 15

// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
var subtractProductAndSum = function (n) {
  // Array.from is used to seperate stuff, n.toString will convert the n to string to seperate and .map(Number)
  //will convert array of string to array of numbers
  n = 234;
  ArrayOfNumbers = Array.from(n.toString()).map(Number);
  //addition
  let sum = 0;
  for (const num of ArrayOfNumbers) {
    sum += num;
  }

  //product
  let product = 1;
  for (const num of ArrayOfNumbers) {
    product *= num;
  }

  //   returnig the difference
  return product - sum;
};
