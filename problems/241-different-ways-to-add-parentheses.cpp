/*
 * [241] Different Ways to Add Parentheses
 *
 * https://leetcode-cn.com/problems/different-ways-to-add-parentheses/description/
 * https://leetcode.com/problems/different-ways-to-add-parentheses/discuss/
 *
 * algorithms
 * Medium (53.02%)
 * Total Accepted:    80
 * Total Submissions: 153
 * Testcase Example:  '"2-1-1"'
 *
 * 给定一个含有数字和运算符的字符串，为表达式添加括号，改变其运算优先级以求出不同的结果。你需要给出所有可能的组合的结果。有效的运算符号包含 +, - 以及
 * * 。
 * 示例 1:
 * 输入: "2-1-1"
 * 输出: [0, 2]
 * 解释: 
 * ((2-1)-1) = 0 
 * (2-(1-1)) = 2
 * 示例 2:
 * 输入: "2*3-4*5"
 * 输出: [-34, -14, -10, -10, 10]
 * 解释: 
 * (2*(3-(4*5))) = -34 
 * ((2*3)-(4*5)) = -14 
 * ((2*(3-4))*5) = -10 
 * (2*((3-4)*5)) = -10 
 * (((2*3)-4)*5) = 10
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        
