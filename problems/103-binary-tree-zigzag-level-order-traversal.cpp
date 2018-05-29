/*
 * [103] Binary Tree Zigzag Level Order Traversal
 *
 * https://leetcode-cn.com/problems/binary-tree-zigzag-level-order-traversal/description/
 * https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/discuss/
 *
 * algorithms
 * Medium (41.33%)
 * Total Accepted:    602
 * Total Submissions: 1.5K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * 给定一个二叉树，返回其节点值的锯齿形层次遍历。（即先从左往右，再从右往左进行下一层遍历，以此类推，层与层之间交替进行）。
 * 例如：
 * 给定二叉树 [3,9,20,null,null,15,7],
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 返回锯齿形层次遍历如下：
 * [
 * ⁠ [3],
 * ⁠ [20,9],
 * ⁠ [15,7]
 * ]
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        
