/*
 * [2] Add Two Numbers
 *
 * https://leetcode-cn.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (26.31%)
 * Total Accepted:    1.5K
 * Total Submissions: 5.8K
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * 给定两个非空链表来代表两个非负数，位数按照逆序方式存储，它们的每个节点只存储单个数字。将这两数相加会返回一个新的链表。
 * 你可以假设除了数字 0 之外，这两个数字都不会以零开头。
 * 示例：
 * 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 * 输出：7 -> 0 -> 8
 * 原因：342 + 465 = 807
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *pre;
        ListNode *ret = NULL;
        int carry = 0;
        bool first = true;
        do
        {
            ListNode *l = new ListNode(0);
            int num1 = (l1 == NULL) ? (0) : (l1->val);
            int num2 = (l2 == NULL) ? (0) : (l2->val);
            int sum = num1 + num2;

            l->val = (sum + carry) % 10;
            l->next = NULL;

            first ? (ret = l) : (pre->next = l);
            pre = l;

            carry = (sum + carry) / 10;
            l1 = (l1 == NULL) ? (NULL) : (l1->next);
            l2 = (l2 == NULL) ? (NULL) : (l2->next);

            first = false;
        } while (l1 || l2 || carry);

        return ret;
    }

    ListNode *initByVector(vector<int> &nums)
    {
        ListNode *ret = NULL;
        ListNode *pre = NULL;
        bool first = true;
        for (int &num : nums)
        {
            ListNode *l = new ListNode(num);
            first ? (ret = l) : (pre->next = l);
            pre = l;
            first = false;
        }
        return ret;
    }

    void print(ListNode *l)
    {
        while (l != NULL)
        {
            cout << l->val << "";
            l = l->next;
        }
        cout << endl;
    }
};

int main()
{
    Solution s;
    vector<int> n1{1};
    vector<int> n2{9, 9};

    ListNode *l1 = s.initByVector(n1);
    ListNode *l2 = s.initByVector(n2);

    s.print(l1);
    s.print(l2);
    s.print(s.addTwoNumbers(l1, l2));

    return 0;
}
