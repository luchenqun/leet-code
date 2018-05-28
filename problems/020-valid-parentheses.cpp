/*
* [20] Valid Parentheses
*
* https://leetcode-cn.com/problems/valid-parentheses/description/
*
* algorithms
* Easy (29.69%)
* Total Accepted:    488
* Total Submissions: 1.6K
* Testcase Example:  '"["'
*
* 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
* 括号必须以正确的顺序关闭，"()" 和 "()[]{}" 是有效的但是 "(]" 和 "([)]" 不是。
*/

#include <iostream>
#include <string>
#include <stack>
#include <map>
using namespace std;

class Solution
{
  public:
    Solution()
    {
        cout << "construction" << endl;
        brace[')'] = '(';
        brace[']'] = '[';
        brace['}'] = '{';
    }
    bool isValid(string s)
    {
        stack<char> st;
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            char c = s[i];
            if (c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else
            {
                if (st.size() == 0)
                    return false;
                char top = st.top();
                char val = brace[c];
                st.pop();
                if (top != val)
                {
                    return false;
                }
            }
        }
        return st.size() == 0;
    }

  private:
    map<char, char> brace;
};

int main()
{
    Solution s;

    cout << s.isValid("()") << endl;
    cout << s.isValid("]") << endl;
    cout << s.isValid("()[]{}") << endl;
    cout << s.isValid("([)]") << endl;

    return 0;
}
