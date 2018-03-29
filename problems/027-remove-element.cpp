/*
 * [27] Remove Element
 *
 * https://leetcode-cn.com/problems/remove-element/description/
 *
 * algorithms
 * Easy (45.90%)
 * Total Accepted:    652
 * Total Submissions: 1.4K
 * Testcase Example:  '[3,2,2,3]\n3'
 *
 * 给定一个数组和一个值，在这个数组中原地移除指定值和返回移除后新的数组长度。
 * 不要为其他数组分配额外空间，你必须使用 O(1) 的额外内存原地修改这个输入数组。
 * 元素的顺序可以改变。超过返回的新的数组长度以外的数据无论是什么都没关系。
 * 示例:
 * 给定 nums = [3,2,2,3]，val = 3，
 * 你的函数应该返回 长度 = 2，数组的前两个元素是 2。
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
  public:
    int removeElement(vector<int> &nums, int val)
    {
        int index = 0;
        for (int &num : nums)
        {
            if (num != val)
            {
                nums[index++] = num;
            }
        }
        return index;
    }
};

int main()
{
    Solution s;
    vector<int> nums{1, 1, 2, 3, 3, 3, 5, 6, 8, 8, 8};
    cout << s.removeElement(nums, 1) << endl;
    return 0;
}
