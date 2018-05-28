/*
 * [70] Climbing Stairs
 *
 * https://leetcode-cn.com/problems/climbing-stairs/description/
 *
 * algorithms
 * Easy (41.68%)
 * Total Accepted:    3.7K
 * Total Submissions: 9.1K
 * Testcase Example:  '2'
 *
 * 假设你正在爬楼梯。需要 n 步你才能到达楼顶。
 * 每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
 * 注意：给定 n 是一个正整数。
 * 示例 1：
 * 输入： 2
 * 输出： 2
 * 解释： 有两种方法可以爬到楼顶。
 * 1.  1 步 + 1 步
 * 2.  2 步
 * 示例 2：
 * 输入： 3
 * 输出： 3
 * 解释： 有三种方法可以爬到楼顶。
 * 1.  1 步 + 1 步 + 1 步
 * 2.  1 步 + 2 步
 * 3.  2 步 + 1 步
 */

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution
{
  public:
    int climbStairs(int n)
    {
        int step1 = 1;
        int step2 = 2;
        int ans = 0;

        if (n == 1)
        {
            ans = 1;
        }
        else if (n == 2)
        {
            ans = 2;
        }
        else
        {
            for (int step = 3; step <= n; step++)
            {
                ans = step1 + step2;
                step1 = step2;
                step2 = ans;
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;

    cout << s.climbStairs(44) << endl;

    return 0;
}
