/*
 * [67] Add Binary
 *
 * https://leetcode-cn.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (31.66%)
 * Total Accepted:    1.6K
 * Total Submissions: 4.2K
 * Testcase Example:  '"11"\n"1"'
 *
 * 给定两个二进制字符串，返回他们的和（用二进制表示）。
 * 输入为非空字符串且只包含数字 1 和 0。
 * 示例 1:
 * 输入: a = "11", b = "1"
 * 输出: "100"
 * 示例 2:
 * 输入: a = "1010", b = "1011"
 * 输出: "10101"
 */

#include <iostream>
#include <string>
using namespace std;

class Solution
{
  public:
    string addBinary(string a, string b)
    {
        auto aIter = a.rbegin();
        auto bIter = b.rbegin();

        char carry = 0;
        string ans = "";

        while (aIter != a.rend() || bIter != b.rend())
        {
            char aC = aIter != a.rend() ? (*aIter - '0') : 0;
            char bC = bIter != b.rend() ? (*bIter - '0') : 0;
            char rC = aC + bC + carry;
            ans = char((rC % 2) + '0') + ans;
            carry = rC / 2;

            if(aIter != a.rend()) aIter++;
            if(bIter != b.rend()) bIter++;
        }

        if (carry)
        {
            ans = char(carry + '0') + ans;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    cout << boolalpha;
    cout << (s.addBinary("11", "1") == "100") << endl;
    cout << (s.addBinary("1010", "1011") == "10101") << endl;
    cout << (s.addBinary("", "") == "") << endl;

    return 0;
}
