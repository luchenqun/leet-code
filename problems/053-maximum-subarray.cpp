/*
* [53] Maximum Subarray
*
* https://leetcode-cn.com/problems/maximum-subarray/description/
*
* algorithms
* Easy (33.84%)
* Total Accepted:    472
* Total Submissions: 1.4K
* Testcase Example:  '[-2,1,-3,4,-1,2,1,-5,4]'
*
* 给定一个序列（至少含有 1 个数），从该序列中寻找一个连续的子序列，使得子序列的和最大。
* 例如，给定序列 [-2,1,-3,4,-1,2,1,-5,4]，
* 连续子序列 [4,-1,2,1] 的和最大，为 6。
* 扩展练习:
* 若你已实现复杂度为 O(n) 的解法，尝试使用更为精妙的分治法求解。
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution
{
  public:
    int maxSubArray(vector<int> &nums)
    {
        int ret = INT_MIN;
        int curMax = 0;
        for (int &num : nums)
        {
            curMax = max(curMax + num, num);
            ret = max(ret, curMax);
        }

        return ret;
    }
};

int main()
{
    Solution s;
    vector<int> nums{-2, -1, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << s.maxSubArray(nums) << endl;

    return 0;
}
