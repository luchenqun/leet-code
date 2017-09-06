/*
3. Longest Substring Without Repeating Characters
Given a string, find the length of the longest substring without repeating characters.
Examples:
Given "abcabcbb", the answer is "abc", which the length is 3.
Given "bbbbb", the answer is "b", with the length of 1.
Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

大概意思就是给一个字符串，求它最长的一个子串的长度，这个子串的所有字符都不重复。
*/

/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let len = s.length;
    let set = new Set();
    let i=0; 
    let j=0;
    let ans = 0;
    while(i<len && j<len){
        if (!set.has(s[j])) {
            set.add(s[j++]);
            ans = (j-i) > ans ? (j-i) : ans;
        } else {
            set.delete(s[i++]);
        }
    }
    return ans;
};

module.exports = lengthOfLongestSubstring;