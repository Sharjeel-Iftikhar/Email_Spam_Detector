// Example 1:

// Input: x = 4
// Output: 2
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.

var mySqrt = function (x) {
  let target = 1;
  while (target * target <= x) {
    target += 1;
    // console.log(`Try : ${target - 1}`);
  }
  return target - 1;
};

console.log(mySqrt(198765));
