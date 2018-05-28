/*
* [21] Merge Two Sorted Lists
*
* https://leetcode-cn.com/problems/merge-two-sorted-lists/description/
*
* algorithms
* Easy (47.25%)
* Total Accepted:    551
* Total Submissions: 1.1K
* Testcase Example:  '[1,2,4]\n[1,3,4]'
*
* 合并两个已排序的链表，并将其作为一个新列表返回。新列表应该通过拼接前两个列表的节点来完成。 
* 示例：
* 输入：1->2->4, 1->3->4
* 输出：1->1->2->3->4->4
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
  public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *ret = NULL;
        ListNode *pre = NULL;
        bool first = true;
        while (l1 || l2)
        {
            ListNode *cur = minListNode(l1, l2);
            if (first)
            {
                ret = cur;
                first = false;
            }
            else
            {
                pre->next = cur;
            }

            if (cur == l1)
            {
                l1 = l1 == NULL ? NULL : l1->next;
            }
            if (cur == l2)
            {
                l2 = l2 == NULL ? NULL : l2->next;
            }

            pre = cur;
        }
        if (pre)
        {
            pre->next = NULL;
        }
        return ret;
    }

    ListNode *minListNode(ListNode *l1, ListNode *l2)
    {
        ListNode *ret = NULL;
        if (l1 && l2)
        {
            ret = l1->val < l2->val ? l1 : l2;
        }
        else if (l1)
        {
            ret = l1;
        }
        else if (l2)
        {
            ret = l2;
        }
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
    vector<int> n1{1, 2, 3, 5};
    vector<int> n2{1, 2, 6, 9};

    ListNode *l1 = s.initByVector(n1);
    ListNode *l2 = s.initByVector(n2);

    s.print(l1);
    s.print(l2);
    s.print(s.mergeTwoLists(l1, l2));
    return 0;
}
