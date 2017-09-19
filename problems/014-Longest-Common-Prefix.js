/*Write a function to find the longest common prefix string amongst an array of strings. */

/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
    let prefix = '';
    strs.sort((a, b) => a.length - b.length);
    let maxLen = (strs.length > 0 && strs[0].length) || (-1);
    while(maxLen >= 0){
        let find = true;
        prefix = strs[0].substring(0, maxLen);
        for (let str of strs) {
            if (!str.startsWith(prefix)) {
                find = false;
                break;
            }
        }
        if (find) {
            break;
        }
        maxLen--;
    }

    return prefix;
};

module.exports = longestCommonPrefix;