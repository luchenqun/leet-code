/*
 * [100] Same Tree
 *
 * https://leetcode-cn.com/problems/same-tree/description/
 *
 * algorithms
 * Easy (48.51%)
 * Total Accepted:    1.6K
 * Total Submissions: 3.3K
 * Testcase Example:  '[1,2,3]\n[1,2,3]'
 *
 * 给定两个二叉树，编写一个函数来检验它们是否相同。
 * 如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
 * 示例 1:
 * 输入:       1         1
 * ⁠         / \       / \
 * ⁠        2   3     2   3
 * ⁠       [1,2,3],   [1,2,3]
 * 输出: true
 * 示例 2:
 * 输入:      1          1
 * ⁠         /           \
 * ⁠        2             2
 * ⁠       [1,2],     [1,null,2]
 * 输出: false
 * 示例 3:
 * 输入:       1         1
 * ⁠         / \       / \
 * ⁠        2   1     1   2
 * ⁠       [1,2,1],   [1,1,2]
 * 输出: false
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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p == NULL || q == NULL)
            return (p == q);
        return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};

int main()
{
    Solution s;

    return 0;
}
