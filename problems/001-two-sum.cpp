/*
 * [1] Two Sum
 *
 * https://leetcode-cn.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (40.84%)
 * Total Accepted:    5K
 * Total Submissions: 12.1K
 * Testcase Example:  '[3,2,4]\n6'
 *
 * 给定一个整数数列，找出其中和为特定值的那两个数。
 * 你可以假设每个输入都只会有一种答案，同样的元素不能被重用。
 * 示例:
 * 给定 nums = [2, 7, 11, 15], target = 9
 * 因为 nums[0] + nums[1] = 2 + 7 = 9
 * 所以返回 [0, 1]
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
  public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ret;
        for (auto iter = nums.begin(); iter < nums.end(); iter++)
        {
            auto iFind = find(iter + 1, nums.end(), (target - *iter));
            if (iFind != nums.end())
            {
                ret.push_back(iter - nums.begin());
                ret.push_back(iFind - nums.begin());
                break;
            }
        }
        return ret;
    }
};

int main()
{
    Solution s;
    vector<int> nums{8, 11, 2, 7};
    int target = 9;

    vector<int> ret = s.twoSum(nums, target);

    for_each(ret.begin(), ret.end(), [](int &n){ cout << n << " "; });

    return 0;
}
