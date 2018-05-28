/*
 * [69] Sqrt(x)
 *
 * https://leetcode-cn.com/problems/sqrtx/description/
 *
 * algorithms
 * Easy (27.98%)
 * Total Accepted:    2.2K
 * Total Submissions: 7.2K
 * Testcase Example:  '4'
 *
 * 实现 int sqrt(int x) 函数。
 * 计算并返回 x 的平方根，其中 x 是非负整数。
 * 由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
 * 示例 1:
 * 输入: 4
 * 输出: 2
 * 示例 2:
 * 输入: 8
 * 输出: 2
 * 说明: 8 的平方根是 2.82842..., 
 * 由于返回类型是整数，小数部分将被舍去。
 */

#include <iostream>
using namespace std;

class Solution
{
  public:
    int mySqrt(int x)
    {
        long long ans = 0; // 强制提升x为long long，防止 (ans + 1) * (ans + 1) 溢出

        while (true)
        {
            if ((ans * ans <= x) && ((ans + 1) * (ans + 1) > x))
            {
                break;
            }
            ans++;
        }
        return ans;
    }
};

int main()
{
    Solution s;

    cout << s.mySqrt(2147395600) << endl;
    return 0;
}
