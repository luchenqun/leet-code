/*
 * [101] Symmetric Tree
 *
 * https://leetcode-cn.com/problems/symmetric-tree/description/
 *
 * algorithms
 * Easy (39.74%)
 * Total Accepted:    2.6K
 * Total Submissions: 6.4K
 * Testcase Example:  '[1,2,2,3,4,4,3]'
 *
 * 给定一个二叉树，检查它是否是镜像对称的。
 * 例如，二叉树 [1,2,2,3,4,4,3] 是对称的。
 * ⁠   1
 * ⁠  / \
 * ⁠ 2   2
 * ⁠/ \ / \
 *3  4 4  3
 * 但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:
 * ⁠   1
 * ⁠  / \
 * ⁠ 2   2
 * ⁠  \   \
 * ⁠  3    3
 * 说明:
 * 如果你可以运用递归和迭代两种方法解决这个问题，会很加分。
 */

#include <iostream>
#include <string>
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
    bool isSymmetric(TreeNode *root)
    {
        return root == NULL || isSymmetric(root->left, root->right);
    }

    bool isSymmetric(TreeNode *tn1, TreeNode *tn2)
    {
        if (tn1 == NULL || tn2 == NULL)
            return tn1 == tn2;
        return (tn1->val == tn2->val) && isSymmetric(tn1->left, tn2->right) && isSymmetric(tn1->right, tn2->left);
    }
};

int main()
{
    Solution s;

    return 0;
}
