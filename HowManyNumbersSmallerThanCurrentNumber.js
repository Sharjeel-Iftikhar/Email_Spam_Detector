// Input: nums = [8,1,2,2,3]
// Output: [4,0,1,1,3]
// Explanation:
// For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3).
// For nums[1]=1 does not exist any smaller number than it.
// For nums[2]=2 there exist one smaller number than it (1).
// For nums[3]=2 there exist one smaller number than it (1).
// For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).

// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
var smallerNumbersThanCurrent = function (nums) {
  let result = [];
  for (let i = 0; i < nums.length; i++) {
    let counter = 0;
    for (let j = 0; j < nums.length; j++) {
      if (j != i && nums[i] > nums[j]) {
        counter++;
      }
    }
    result.push(counter);
  }
  return result;
};

// Alternative Way - A very complex shit
// var smallerNumbersThanCurrent = function (nums) {
//   // sort the array and preserve the initial array ( 1,2,3,4 ascending)
//   const sorted = [...nums].sort((a, b) => a - b);
//   // Why sort?
//   // 1,2,2,3,8
//   // first index of each element is the answer to each element
//   return nums.map((num) => sorted.indexOf(num));
// };
