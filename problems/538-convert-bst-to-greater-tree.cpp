/*
 * [538] Convert BST to Greater Tree
 *
 * https://leetcode-cn.com/problems/convert-bst-to-greater-tree/description/
 * https://leetcode.com/problems/convert-bst-to-greater-tree/discuss/
 *
 * algorithms
 * Easy (43.03%)
 * Total Accepted:    257
 * Total Submissions: 592
 * Testcase Example:  '[5,2,13]'
 *
 * 给定一个二叉搜索树（Binary Search Tree），把它转换成为累加树（Greater
 * Tree)，使得每个节点的值是原来的节点值加上所有大于它的节点值之和。
 * 例如：
 * 输入: 二叉搜索树:
 * ⁠             5
 * ⁠           /   \
 * ⁠          2     13
 * 输出: 转换为累加树:
 * ⁠            18
 * ⁠           /   \
 * ⁠         20     13
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
    TreeNode* convertBST(TreeNode* root) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        
