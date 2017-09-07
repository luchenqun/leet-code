/*
5. Longest Palindromic Substring
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example:

Input: "babad"

Output: "bab"

Note: "aba" is also a valid answer.
Example:

Input: "cbbd"

Output: "bb"

求一个字符串的的最大回文串

*/

/**
 * @param {string} s
 * @return {string}
 */
var longestPalindromeBruteForce = function (s) {
    let len = s.length;
    let ans = s[0] || '';

    for (let i = 0; i < len; i++) {
        for (let gap = len - i - 1; gap >= 0; gap--) {
            if (gap + 1 < ans.length) {
                break;
            }

            let start = i;
            let end = i + gap;
            let flag = true;

            while (flag && (start < end)) {
                flag = s[start++] === s[end--];
            }

            if (flag && gap + 1 > ans.length) {
                ans = s.substring(i, i + gap + 1);
                break;
            }
        }
    }

    return ans;
};

var longestPalindrome = function (s) {
    let len = s.length;
    let ans = s[0] || '';

    for (let i = 0; i < len; i++) {
        for (let gap = len - i - 1; gap >= 0; gap--) {
            if (gap + 1 < ans.length) {
                break;
            }

            let start = i;
            let end = i + gap;
            let flag = true;

            while (flag && (start < end)) {
                flag = s[start++] === s[end--];
            }

            if (flag && gap + 1 > ans.length) {
                ans = s.substring(i, i + gap + 1);
                break;
            }
        }
    }

    return ans;
};

module.exports = longestPalindrome;