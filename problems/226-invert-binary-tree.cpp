/*
 * [226] Invert Binary Tree
 *
 * https://leetcode-cn.com/problems/invert-binary-tree/description/
 * https://leetcode.com/problems/invert-binary-tree/discuss/
 *
 * algorithms
 * Easy (61.38%)
 * Total Accepted:    1K
 * Total Submissions: 1.6K
 * Testcase Example:  '[4,2,7,1,3,6,9]'
 *
 * 翻转一棵二叉树。
 * 示例：
 * 输入：
 * ⁠    4
 * ⁠  /   \
 * ⁠ 2     7
 * ⁠/ \   / \
 * 1   3 6   9
 * 输出：
 * ⁠    4
 * ⁠  /   \
 * ⁠ 7     2
 * ⁠/ \   / \
 * 9   6 3   1
 * 备注:
 * 这个问题是受到 Max Howell 的 原问题 启发的 ：
 * 谷歌：我们90％的工程师使用您编写的软件(Homebrew)，但是您却无法在面试时在白板上写出翻转二叉树这道题，这太糟糕了。
 */

#include <iostream>
#include <algorithm>
#include <stack>
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
    TreeNode *invertTree(TreeNode *root)
    {
        if (root)
            invertTreeLR(root->left, root->right);
        return root;
    }

    void invertTreeLR(TreeNode *&l, TreeNode *&r)
    {
        if (!l && !r)
            return;
        swap(l, r);
        if (l)
        {
            invertTreeLR(l->left, l->right);
        }
        if (r)
        {
            invertTreeLR(r->left, r->right);
        }
    }

    TreeNode *invertTree1(TreeNode *root)
    {
        if (root)
        {
            invertTree(root->left);
            invertTree(root->right);
            swap(root->left, root->right);
        }
        return root;
    }

    TreeNode *invertTree2(TreeNode *root)
    {
        stack<TreeNode *> stk;
        stk.push(root);

        while (!stk.empty())
        {
            TreeNode *p = stk.top();
            stk.pop();
            if (p)
            {
                stk.push(p->left);
                stk.push(p->right);
                std::swap(p->left, p->right);
            }
        }
        return root;
    }
};

int main()
{
    Solution s;

    return 0;
}
