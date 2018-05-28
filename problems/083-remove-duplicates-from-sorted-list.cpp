/*
 * [83] Remove Duplicates from Sorted List
 *
 * https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/description/
 *
 * algorithms
 * Easy (36.67%)
 * Total Accepted:    1.7K
 * Total Submissions: 4.3K
 * Testcase Example:  '[1,1,2]'
 *
 * 给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
 * 示例 1:
 * 输入: 1->1->2
 * 输出: 1->2
 * 示例 2:
 * 输入: 1->1->2->3->3
 * 输出: 1->2->3
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * Definition for singly-linked list.
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *pre = head;
        ListNode *next = head == NULL ? NULL : head->next;
        int val = head == NULL ? NULL : head->val;
        while (next)
        {
            if (next->val != val)
            {
                pre->next = next;
                pre = next;
                val = next->val;
            }

            next = next->next;
        }
        
        if (pre)
        {
            pre->next = NULL;
        }

        return head;
    }
};

int main()
{
    Solution s;

    return 0;
}