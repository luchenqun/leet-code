/*
 * [669] Trim a Binary Search Tree
 *
 * https://leetcode-cn.com/problems/trim-a-binary-search-tree/description/
 * https://leetcode.com/problems/trim-a-binary-search-tree/discuss/
 *
 * algorithms
 * Easy (53.29%)
 * Total Accepted:    247
 * Total Submissions: 460
 * Testcase Example:  '[1,0,2]\n1\n2'
 *
 * 给定一个二叉搜索树，同时给定最小边界L 和最大边界 R。通过修剪二叉搜索树，使得所有节点的值在[L, R]中 (R>=L)
 * 。你可能需要改变树的根节点，所以结果应当返回修剪好的二叉搜索树的新的根节点。
 * 示例 1:
 * 输入: 
 * ⁠   1
 * ⁠  / \
 * ⁠ 0   2
 * ⁠ L = 1
 * ⁠ R = 2
 * 输出: 
 * ⁠   1
 * ⁠     \
 * ⁠      2
 * 示例 2:
 * 输入: 
 * ⁠   3
 * ⁠  / \
 * ⁠ 0   4
 * ⁠  \
 * ⁠   2
 * ⁠  /
 * ⁠ 1
 * ⁠ L = 1
 * ⁠ R = 3
 * 输出: 
 * ⁠     3
 * ⁠    / 
 * ⁠  2   
 * ⁠ /
 * ⁠1
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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        
