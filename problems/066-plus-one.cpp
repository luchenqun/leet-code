/*
 * [66] Plus One
 *
 * https://leetcode-cn.com/problems/plus-one/description/
 *
 * algorithms
 * Easy (32.96%)
 * Total Accepted:    5.3K
 * Total Submissions: 15.3K
 * Testcase Example:  '[1,2,3]'
 *
 * 给定一个非负整数组成的非空数组，在该数的基础上加一，返回一个新的数组。
 * 最高位数字存放在数组的首位， 数组中每个元素只存储一个数字。
 * 你可以假设除了整数 0 之外，这个整数不会以零开头。
 * 示例 1:
 * 输入: [1,2,3]
 * 输出: [1,2,4]
 * 解释: 输入数组表示数字 123。
 * 示例 2:
 * 输入: [4,3,2,1]
 * 输出: [4,3,2,2]
 * 解释: 输入数组表示数字 4321。
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
    vector<int> plusOne(vector<int> &digits)
    {
        const int ADDNUM = 1;
        *digits.rbegin() += ADDNUM;
        int carry = 0;
        for (auto iter = digits.rbegin(); iter < digits.rend(); iter++)
        {
            *iter += carry;
            carry = *iter / 10;
            *iter %= 10;
        }

        if (carry > 0)
        {
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};

int main()
{
    auto print = [](vector<int> &digits) {
        for (auto &num : digits)
        {
            cout << num << " ";
        }
        cout << endl;
    };

    Solution s;
    vector<int> d1 = {4, 3, 2, 1};
    vector<int> d2 = {9, 9, 9, 9};
    vector<int> d3 = {0};

    s.plusOne(d1);
    s.plusOne(d2);
    s.plusOne(d3);

    print(d1);
    print(d2);
    print(d3);

    return 0;
}
