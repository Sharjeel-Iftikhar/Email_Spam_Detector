// Input: sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
// Output: 6
// Explanation:
// - The first sentence, "alice and bob love leetcode", has 5 words in total.
// - The second sentence, "i think so too", has 4 words in total.
// - The third sentence, "this is great thanks very much", has 6 words in total.
// Thus, the maximum number of words in a single sentence comes from the third sentence, which has 6 words.

// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
var mostWordsFound = function (sentences) {
  let max = 0;
  for (let sentence of sentences) {
    // splitting the sentence with white spaces for words count
    let words = sentence.split(' ');
    // Getting the maximum length word
    max = Math.max(max, words.length);
  }
  return max;
};
