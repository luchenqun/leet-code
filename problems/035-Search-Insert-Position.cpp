/*
 * [35] Search Insert Position
 *
 * https://leetcode-cn.com/problems/search-insert-position/description/
 *
 * algorithms
 * Easy (40.06%)
 * Total Accepted:    448
 * Total Submissions: 1.1K
 * Testcase Example:  '[1,3,5,6]\n5'
 *
 * 给定一个排序数组和一个目标值，如果在数组中找到目标值则返回索引。如果没有，返回到它将会被按顺序插入的位置。
 * 你可以假设在数组中无重复元素。
 * 案例 1:
 * 输入: [1,3,5,6], 5
 * 输出: 2
 * 案例 2:
 * 输入: [1,3,5,6], 2
 * 输出: 1
 * 案例 3:
 * 输入: [1,3,5,6], 7
 * 输出: 4
 * 案例 4:
 * 输入: [1,3,5,6], 0
 * 输出: 0
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
  public:
    int searchInsert(vector<int> &nums, int target)
    {
        auto iter = lower_bound(nums.begin(), nums.end(), target);
        return iter - nums.begin();
    }
};

int main()
{
    Solution s;
    vector<int> nums{1, 3, 5, 6};
    cout << s.searchInsert(nums, 5) << endl;
    cout << s.searchInsert(nums, 2) << endl;
    cout << s.searchInsert(nums, 7) << endl;
    cout << s.searchInsert(nums, 0) << endl;

    return 0;
}
