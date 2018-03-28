/*
 * [7] Reverse Integer
 *
 * https://leetcode-cn.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (24.04%)
 * Total Accepted:    1.5K
 * Total Submissions: 6.4K
 * Testcase Example:  '123'
 *
 * 给定一个范围为 32 位 int 的整数，将其颠倒。
 * 例 1:
 * 输入: 123
 * 输出:  321
 * 例 2:
 * 输入: -123
 * 输出: -321
 * 例 3:
 * 输入: 120
 * 输出: 21
 * 注意:
 * 假设我们的环境只能处理 32 位 int 范围内的整数。根据这个假设，如果颠倒后的结果超过这个范围，则返回 0。
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

class Solution
{
  public:
    int reverse(int x)
    {
        int negtive = (x < 0) ? (-1) : (1);
        x = x * negtive;
        string str = to_string(x);
        std::reverse(str.begin(), str.end());
        long long num = stoll(str);
        if (num > INT_MAX)
            num = 0;
        num = negtive * num;
        return num;
    }
};

int main()
{
    Solution s;
    vector<int> test{-1212, -3, 1000000039, 111134721, -33123};
    for (auto &num : test)
    {
        cout << num << " " << s.reverse(num) << endl;
    }

    return 0;
}
