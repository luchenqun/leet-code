/*
 * [344] Reverse String
 *
 * https://leetcode-cn.com/problems/reverse-string/description/
 * https://leetcode.com/problems/reverse-string/discuss/
 *
 * algorithms
 * Easy (61.88%)
 * Total Accepted:    5.4K
 * Total Submissions: 8.7K
 * Testcase Example:  '"hello"'
 *
 * 请编写一个函数，其功能是将输入的字符串反转过来。
 * 示例：
 * 输入：s = "hello"
 * 返回："olleh"
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        reverse(s.begin(), s.end());
        return s;
    }
};

int main()
{
    Solution s;

    return 0;
}
        
