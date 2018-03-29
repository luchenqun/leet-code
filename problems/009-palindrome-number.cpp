/*
 * [9] Palindrome Number
 *
 * https://leetcode-cn.com/problems/palindrome-number/description/
 *
 * algorithms
 * Easy (38.11%)
 * Total Accepted:    837
 * Total Submissions: 2.2K
 * Testcase Example:  '-2147483648'
 *
 * 判断一个整数是否是回文数。不能使用辅助空间。
 * 点击查看提示
 * 一些提示:
 * 负整数可以是回文数吗？（例如 -1）
 * 如果你打算把整数转为字符串，请注意不允许使用辅助空间的限制。
 * 你也可以考虑将数字颠倒。但是如果你已经解决了 “颠倒整数” 问题的话，就会注意到颠倒整数时可能会发生溢出。你怎么来解决这个问题呢？
 * 本题有一种比较通用的解决方式。
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        string num1 = to_string(x);
        string num2 = num1;
        reverse(num1.begin(), num1.end());
        return num1 == num2;
    }
};

int main()
{
    Solution s;

    cout << boolalpha << s.isPalindrome(-1) << endl;
    cout << boolalpha << s.isPalindrome(123321) << endl;
    cout << boolalpha << s.isPalindrome(12321) << endl;
    cout << boolalpha << s.isPalindrome(0) << endl;

    return 0;
}
        
