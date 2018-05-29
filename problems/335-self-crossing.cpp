/*
 * [335] Self Crossing
 *
 * https://leetcode-cn.com/problems/self-crossing/description/
 * https://leetcode.com/problems/self-crossing/discuss/
 *
 * algorithms
 * Hard (16.11%)
 * Total Accepted:    24
 * Total Submissions: 149
 * Testcase Example:  '[2,1,1,2]'
 *
 * 给定一个含有 n 个正数的数组
 * x。从点(0,0)开始，向北移动x[0]米，然后向西移动x[1]米，向南移动x[2]米，向东移动x[3]米，持续进行。换句话说，每次移动后你的方向都会逆时针变化。
 * 以 O(1)的空间复杂度写一个一遍扫描算法，判断你的路径是否交叉。
 * 示例 1:
 * 给定 x = [2, 1, 1, 2],
 * ?????
 * ?   ?
 * ???????>
 * ⁠   ?
 * 返回 true (路径交叉了)
 * 示例 2:
 * 给定 x = [1, 2, 3, 4],
 * ????????
 * ?      ?
 * ?
 * ?
 * ?????????????>
 * 返回 false (路径没有相交)
 * 示例 3:
 * 给定 x = [1, 1, 1, 1],
 * ?????
 * ?   ?
 * ?????>
 * 返回 true (路径相交了)
 * 致谢:
 * 特别感谢 @dietpepsi 添加这道题并创建所有测试用例。
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSelfCrossing(vector<int>& x) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        
