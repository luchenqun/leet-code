/*
 * [58] Length of Last Word
 *
 * https://leetcode-cn.com/problems/length-of-last-word/description/
 *
 * algorithms
 * Easy (31.43%)
 * Total Accepted:    1.8K
 * Total Submissions: 6.2K
 * Testcase Example:  '"Hello World"'
 *
 * 给定一个仅包含大小写字母和空格 ' ' 的字符串，返回其最后一个单词的长度。
 * 如果不存在最后一个单词，请返回 0 。
 * 说明：一个单词是指由字母组成，但不包含任何空格的字符串。
 * 示例:
 * 输入: "Hello World"
 * 输出: 5
 */

#include <iostream>
#include <string>
using namespace std;

class Solution
{
  public:
    int lengthOfLastWord(string s)
    {
        // 去除前后空格
        s.erase(0, s.find_first_not_of(" "));
        s.erase(s.find_last_not_of(" ") + 1);

        string::size_type pos = s.rfind(' ');
        if (pos == string::npos)
        {
            return s.length();
        }
        else
        {
            return s.length() - pos - 1;
        }
    }
};

int main()
{
    Solution s;

    cout << s.lengthOfLastWord("Hello World") << endl;
    cout << s.lengthOfLastWord("a a12 ") << endl;
    cout << s.lengthOfLastWord(" a  ") << endl;
    cout << s.lengthOfLastWord("") << endl;
    
    return 0;
}
