/*
 * [119] Pascal's Triangle II
 *
 * https://leetcode-cn.com/problems/pascals-triangle-ii/description/
 * https://leetcode.com/problems/pascals-triangle-ii/discuss/
 *
 * algorithms
 * Easy (47.65%)
 * Total Accepted:    978
 * Total Submissions: 2.1K
 * Testcase Example:  '3'
 *
 * 给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。
 * 在杨辉三角中，每个数是它左上方和右上方的数的和。
 * 示例:
 * 输入: 3
 * 输出: [1,3,3,1]
 * 进阶：
 * 你可以优化你的算法到 O(k) 空间复杂度吗？
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
    Solution()
    {
        ans.push_back(vector<int>{1});
        for (int row = 2; row <= 34; row++)
        {
            int preSize = ans[row - 2].size();
            vector<int> curRow = {1};

            for (int i = 1; i < preSize; i++)
            {
                curRow.push_back(ans[row - 2].at(i - 1) + ans[row - 2].at(i));
            }
            curRow.push_back(1);
            ans.push_back(curRow);
        }
    }
    vector<int> getRow(int rowIndex)
    {
        return ans.at(rowIndex);
    }

  private:
    vector<vector<int>> ans;
};

int main()
{
    Solution s;

    return 0;
}
