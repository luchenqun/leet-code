/*
 * [99] Recover Binary Search Tree
 *
 * https://leetcode-cn.com/problems/recover-binary-search-tree/description/
 * https://leetcode.com/problems/recover-binary-search-tree/discuss/
 *
 * algorithms
 * Hard (37.01%)
 * Total Accepted:    190
 * Total Submissions: 518
 * Testcase Example:  '[1,3,null,null,2]'
 *
 * 二叉搜索树中的两个节点被错误地交换。
 * 请在不改变其结构的情况下，恢复这棵树。
 * 示例 1:
 * 输入: [1,3,null,null,2]
 * 1
 * /
 * 3
 * \
 * 2
 * 输出: [3,1,null,null,2]
 * 3
 * /
 * 1
 * \
 * 2
 * 示例 2:
 * 输入: [3,1,4,null,null,2]
 * ⁠ 3
 * ⁠/ \
 * 1   4
 * /
 * 2
 * 输出: [2,1,4,null,null,3]
 * ⁠ 2
 * ⁠/ \
 * 1   4
 * /
 * ⁠ 3
 * 进阶:
 * 使用 O(n) 空间复杂度的解法很容易实现。
 * 你能想出一个只使用常数空间的解决方案吗？
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void recoverTree(TreeNode* root) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        
