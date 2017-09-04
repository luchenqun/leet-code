/*
2. Add Two Numbers
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

有两个连结阵列分别代表两个非负整数，他们的位数是反向储存(越前面的节点位数越低)，毎一个节点代表一个位数，将这两个连结阵列加总后以连结阵列形式回传。+
范例：
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4) 
Output:个位数为2与5，相加为7 ；十位数为4+6 = 10，需要进位；百位数为3 + 4 + 1(进位) = 8，结果为7->0->8

*/
var ListNode = function (val) {
    this.val = val;
    this.next = null;
}
/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function (l1, l2) {
    var carry = 0;
    var pre = null;
    var index = 0;
    while(l1 || l2 || carry > 0){
        let a = (l1 && l1.val) || 0;
        let b = (l2 && l2.val) || 0;
        let sum = a + b + carry;

        let node = new ListNode(sum % 10);
        carry = sum >= 10 ? 1 : 0;

        if (index++ === 0) {
            firstNode = node;
        } else {
            pre.next = node;
        }
        pre = node;
        l1 = l1 && l1.next;
        l2 = l2 && l2.next;
    }

    return firstNode;
};

module.exports = addTwoNumbers;