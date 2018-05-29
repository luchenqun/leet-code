/*
 * [572] Subtree of Another Tree
 *
 * https://leetcode-cn.com/problems/subtree-of-another-tree/description/
 * https://leetcode.com/problems/subtree-of-another-tree/discuss/
 *
 * algorithms
 * Easy (36.24%)
 * Total Accepted:    212
 * Total Submissions: 587
 * Testcase Example:  '[3,4,5,1,2]\n[4,1,2]'
 *
 * 给定两个非空二叉树 s 和 t，检验 s 中是否包含和 t 具有相同结构和节点值的子树。s 的一个子树包括 s 的一个节点和这个节点的所有子孙。s
 * 也可以看做它自身的一棵子树。
 * 示例 1:
 * 给定的树 s:
 * ⁠    3
 * ⁠   / \
 * ⁠  4   5
 * ⁠ / \
 * ⁠1   2
 * 给定的树 t：
 * ⁠  4 
 * ⁠ / \
 * ⁠1   2
 * 返回 true，因为 t 与 s 的一个子树拥有相同的结构和节点值。
 * 示例 2:
 * 给定的树 s：
 * ⁠    3
 * ⁠   / \
 * ⁠  4   5
 * ⁠ / \
 * ⁠1   2
 * ⁠   /
 * ⁠  0
 * 给定的树 t：
 * ⁠  4
 * ⁠ / \
 * ⁠1   2
 * 返回 false。
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        
