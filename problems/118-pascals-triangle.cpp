/*
 * [118] Pascal's Triangle
 *
 * https://leetcode-cn.com/problems/pascals-triangle/description/
 * https://leetcode.com/problems/pascals-triangle/discuss/
 *
 * algorithms
 * Easy (50.04%)
 * Total Accepted:    1.7K
 * Total Submissions: 3.4K
 * Testcase Example:  '5'
 *
 * 给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
 * 在杨辉三角中，每个数是它左上方和右上方的数的和。
 * 示例:
 * 输入: 5
 * 输出:
 * [
 * ⁠    [1],
 * ⁠   [1,1],
 * ⁠  [1,2,1],
 * ⁠ [1,3,3,1],
 * ⁠[1,4,6,4,1]
 * ]
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
    vector<vector<int>> generate(int numRows)
    {
        if (numRows == 0)
            return {};
        vector<vector<int>> ans = {vector<int>{1}};
        for (int row = 2; row <= numRows; row++)
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

        return ans;
    }
};

int main()
{
    Solution s;

    return 0;
}
