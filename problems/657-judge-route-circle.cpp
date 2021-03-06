/*
 * [657] Judge Route Circle
 *
 * https://leetcode-cn.com/problems/judge-route-circle/description/
 * https://leetcode.com/problems/judge-route-circle/discuss/
 *
 * algorithms
 * Easy (65.34%)
 * Total Accepted:    2.2K
 * Total Submissions: 3.4K
 * Testcase Example:  '"UD"'
 *
 * 初始位置 (0, 0) 处有一个机器人。给出它的一系列动作，判断这个机器人的移动路线是否形成一个圆圈，换言之就是判断它是否会移回到原来的位置。
 * 移动顺序由一个字符串表示。每一个动作都是由一个字符来表示的。机器人有效的动作有 R（右），L（左），U（上）和 D（下）。输出应为 true 或
 * false，表示机器人移动路线是否成圈。
 * 示例 1:
 * 输入: "UD"
 * 输出: true
 * 示例 2:
 * 输入: "LL"
 * 输出: false
 */

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution
{
  public:
    struct Point
    {
        int x;
        int y;
    };

    Solution()
    {
        dir["UX"] = 0;
        dir["UY"] = 1;
        dir["DX"] = 0;
        dir["DY"] = -1;
        dir["LX"] = -1;
        dir["LY"] = 0;
        dir["RX"] = 1;
        dir["RY"] = 0;
    }

    bool judgeCircle(string moves)
    {
        struct Point oriPos = {0, 0};

        for (char move : moves)
        {
            oriPos.x += dir[string(1, move) + "X"];
            oriPos.y += dir[string(1, move) + "Y"];
        }

        return (oriPos.x == 0 && oriPos.y == 0);
    }

  private:
    map<string, int> dir;
};

int main()
{
    Solution s;

    return 0;
}
