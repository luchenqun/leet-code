/*
* [26] Remove Duplicates from Sorted Array
*
* https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/description/
*
* algorithms
* Easy (35.29%)
* Total Accepted:    2.5K
* Total Submissions: 7.1K
* Testcase Example:  '[1,1,2]'
*
* 给定一个有序数组，你需要原地删除其中的重复内容，使每个元素只出现一次,并返回新的长度。
* 不要另外定义一个数组，您必须通过用 O(1) 额外内存原地修改输入的数组来做到这一点。
* 示例：
* 给定数组: nums = [1,1,2],
* 你的函数应该返回新长度 2, 并且原数组nums的前两个元素必须是1和2
* 不需要理会新的数组长度后面的元素
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
  public:
    int removeDuplicates(vector<int> &nums)
    {
        int index = 0;
        int pre = nums.size() > 0 ? (nums.front() + 1) : (-1);
        for (int &num : nums)
        {
            if (num != pre)
            {
                nums[index] = num;
                index++;
            }
            pre = num;
        }
        return index;
    }
};

int main()
{
    Solution s;
    vector<int> nums{1, 1, 2, 3, 3, 3, 5, 6, 8, 8, 8};
    std::cout << s.removeDuplicates(nums) << endl;
    return 0;
}
