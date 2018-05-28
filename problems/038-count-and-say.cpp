/*
* [38] Count and Say
*
* https://leetcode-cn.com/problems/count-and-say/description/
*
* algorithms
* Easy (45.53%)
* Total Accepted:    300
* Total Submissions: 657
* Testcase Example:  '1'
*
* 数数并说序列是一个整数序列，第二项起每一项的值为对前一项的计数，其前五项如下：
* 1.     1
* 2.     11
* 3.     21
* 4.     1211
* 5.     111221
* 1 被读作 "一个一" 即 11。
* 11 被读作  "两个一" 即 21。
* 21 被读作  "一个二 和 一个一" 即 1211。
* 给一个正整数 n ，输出数数并说序列的第 n 项。
* 注意：该整数序列的每项都输出为字符串。
* 例 1:
* 输入: 1
* 输出: "1"
* 例 2:
* 输入: 4
* 输出: "1211"
*/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
  public:
    string countAndSay(int n)
    {
        string ret = "1";
        string first = "1";
        for (int i = 2; i <= n; i++)
        {
            int cnt = 0;
            int size = ret.size();
            char pre = ret.front();
            for (int j = 0; j < size; j++)
            {
                char cur = ret.at(j);
                cnt += (cur == pre);

                if (cur != pre)
                {
                    ret += to_string(cnt);
                    ret.push_back(pre);
                    cnt = 1;
                }

                if (j == size - 1)
                {
                    ret += to_string(cur != pre ? 1 : cnt);
                    ret.push_back(cur);
                    cnt = 1;
                }
                pre = cur;
            }
            ret = ret.substr(size);
        }
        return ret;
    }
};

int main()
{
    Solution s;

    for (int i = 1; i <= 20; i++)
    {
        cout << s.countAndSay(i) << endl;
    }

    return 0;
}
