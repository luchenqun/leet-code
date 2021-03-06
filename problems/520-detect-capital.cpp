/*
 * [520] Detect Capital
 *
 * https://leetcode-cn.com/problems/detect-capital/description/
 * https://leetcode.com/problems/detect-capital/discuss/
 *
 * algorithms
 * Easy (48.75%)
 * Total Accepted:    720
 * Total Submissions: 1.5K
 * Testcase Example:  '"USA"'
 *
 * 给定一个单词，你需要判断单词的大写使用是否正确。
 * 我们定义，在以下情况时，单词的大写用法是正确的：
 * 全部字母都是大写，比如"USA"。
 * 单词中所有字母都不是大写，比如"leetcode"。
 * 如果单词不只含有一个字母，只有首字母大写， 比如 "Google"。
 * 否则，我们定义这个单词没有正确使用大写字母。
 * 示例 1:
 * 输入: "USA"
 * 输出: True
 * 示例 2:
 * 输入: "FlaG"
 * 输出: False
 * 注意: 输入是由大写和小写拉丁字母组成的非空单词。
 */

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

class Solution
{
  public:
    bool allUpper(string word)
    {
        for (char &c : word)
        {
            if (!isupper(c))
                return false;
        }
        return true;
    }

    bool allLower(string word)
    {
        for (char &c : word)
        {
            if (!islower(c))
                return false;
        }
        return true;
    }

    bool firstUpper(string &word)
    {
        return (word.size() > 1) && isupper(word.front()) && allLower(word.substr(1));
    }

    bool detectCapitalUse(string word)
    {
        if (word.empty())
            return false;
        return allUpper(word) || allLower(word) || firstUpper(word);
    }

    bool detectCapitalUse1(string word)
    {
        int capCnt = count_if(word.begin(), word.end(), [](char c) { return c <= 'Z'; });
        return !capCnt || capCnt == word.size() || (capCnt == 1 && word[0] <= 'Z');
    }
};

int main()
{
    Solution s;
    cout << s.detectCapitalUse("") << endl;
    cout << s.detectCapitalUse("USA") << endl;
    cout << s.detectCapitalUse("leetcode") << endl;
    cout << s.detectCapitalUse("Google") << endl;
    return 0;
}
