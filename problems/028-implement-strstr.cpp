/*
 * [28] Implement strStr()
 *
 * https://leetcode-cn.com/problems/implement-strstr/description/
 *
 * algorithms
 * Easy (27.85%)
 * Total Accepted:    422
 * Total Submissions: 1.5K
 * Testcase Example:  '"hello"\n"ll"'
 *
 * 实现 strStr()。
 * 返回蕴含在 haystack 中的 needle 的第一个字符的索引，如果 needle 不是 haystack 的一部分则返回 -1 。
 * 例 1:
 * 输入: haystack = "hello", needle = "ll"
 * 输出: 2
 * 例 2:
 * 输入: haystack = "aaaaa", needle = "bba"
 * 输出: -1
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        auto iter = search(haystack.begin(), haystack.end(), needle.begin(), needle.end());
        return iter == haystack.end() ? (-1) : (iter - haystack.begin());
    }
};

int main()
{
    Solution s;
    cout << s.strStr("", "") << endl;
    cout << s.strStr("asdf", "") << endl;
    cout << s.strStr("aaa", "aaa") << endl;
    cout << s.strStr("hello", "ll") << endl;
    cout << s.strStr("aaaaa", "bba") << endl;
    cout << s.strStr("123456789", "567") << endl;

    return 0;
}
        
