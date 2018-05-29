/*
 * [107] Binary Tree Level Order Traversal II
 *
 * https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii/description/
 * https://leetcode.com/problems/binary-tree-level-order-traversal-ii/discuss/
 *
 * algorithms
 * Easy (46.34%)
 * Total Accepted:    896
 * Total Submissions: 1.9K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * 给定一个二叉树，返回其节点值自底向上的层次遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
 * 例如：
 * 给定二叉树 [3,9,20,null,null,15,7],
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 返回其自底向上的层次遍历为：
 * [
 * ⁠ [15,7],
 * ⁠ [9,20],
 * ⁠ [3]
 * ]
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Definition for a binary tree node.
 */

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
  public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        vector<vector<int>> ans;
        dfs(root, ans, 0);
        reverse(ans.begin(), ans.end());

        return ans;
    }

    void dfs(TreeNode *tn, vector<vector<int>> &vc, int depth)
    {
        if (tn == nullptr)
            return;

        if (vc.size() <= depth)
        {
            vc.push_back(vector<int>{});
        }

        vc.at(depth).push_back(tn->val);
        dfs(tn->left, vc, depth + 1);
        dfs(tn->right, vc, depth + 1);
    }
};

int main()
{
    Solution s;

    return 0;
}
