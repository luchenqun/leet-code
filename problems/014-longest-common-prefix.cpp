/*
 * [14] Longest Common Prefix
 *
 * https://leetcode-cn.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (29.83%)
 * Total Accepted:    573
 * Total Submissions: 1.9K
 * Testcase Example:  '[]'
 *
 * 编写一个函数来查找字符串数组中最长的公共前缀字符串。
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
  public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 0)
            return "";
        string base = strs.front();
        int size = base.size();
        for (int i = 0; i < size; i++)
        {
            for (auto iter = strs.begin() + 1; iter < strs.end(); iter++)
            {
                if(i >= (*iter).size() || (*iter).at(i) != base.at(i)){
                    return base.substr(0, i);
                }
            }
        }
        return base;
    }
};

int main()
{
    Solution s;
    vector<string> strs1{"123", "12345", "12345678"};
    vector<string> strs2{"123", "", "12345678"};
    vector<string> strs3{"123", "gg", "ss"};
    cout << s.longestCommonPrefix(strs1) << endl;
    cout << s.longestCommonPrefix(strs2) << endl;
    cout << s.longestCommonPrefix(strs3) << endl;

    return 0;
}
