/*
 * [239] Sliding Window Maximum
 *
 * https://leetcode-cn.com/problems/sliding-window-maximum/description/
 * https://leetcode.com/problems/sliding-window-maximum/discuss/
 *
 * algorithms
 * Hard (34.81%)
 * Total Accepted:    190
 * Total Submissions: 544
 * Testcase Example:  '[1,3,-1,-3,5,3,6,7]\n3'
 *
 * 给定一个数组 nums，有一个大小为 k 的滑动窗口从数组的最左侧移动到数组的最右侧。你只可以看到在滑动窗口 k
 * 内的数字。滑动窗口每次只向右移动一位。
 * 返回滑动窗口最大值。
 * 示例:
 * 输入: nums = [1,3,-1,-3,5,3,6,7], 和 k = 3
 * 输出: [3,3,5,5,6,7] 
 * 解释: 
 * ⁠ 滑动窗口的位置                最大值
 * ---------------               -----
 * [1  3  -1] -3  5  3  6  7       3
 * ⁠1 [3  -1  -3] 5  3  6  7       3
 * ⁠1  3 [-1  -3  5] 3  6  7       5
 * ⁠1  3  -1 [-3  5  3] 6  7       5
 * ⁠1  3  -1  -3 [5  3  6] 7       6
 * ⁠1  3  -1  -3  5 [3  6  7]      7
 * 注意：
 * 你可以假设 k 总是有效的，1 ≤ k ≤ 输入数组的大小，且输入数组不为空。
 * 进阶：
 * 你能在线性时间复杂度内解决此题吗？
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        
