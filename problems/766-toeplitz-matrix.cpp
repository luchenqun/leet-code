/*
 * [777] Toeplitz Matrix
 *
 * https://leetcode-cn.com/problems/toeplitz-matrix/description/
 * https://leetcode.com/problems/toeplitz-matrix/discuss/
 *
 * algorithms
 * Easy (51.48%)
 * Total Accepted:    680
 * Total Submissions: 1.3K
 * Testcase Example:  '[[1,2,3,4],[5,1,2,3],[9,5,1,2]]'
 *
 * 如果一个矩阵的每一方向由左上到右下的对角线上具有相同元素，那么这个矩阵是托普利茨矩阵。
 * 给定一个 M x N 的矩阵，当且仅当它是托普利茨矩阵时返回 True。
 * 示例 1:
 * 输入: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
 * 输出: True
 * 解释:
 * 1234
 * 5123
 * 9512
 * 在上面这个矩阵中, 对角线分别是 "[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]",
 * 各条对角线上的所有元素都相同, 因此答案是True。
 * 示例 2:
 * 输入: matrix = [[1,2],[2,2]]
 * 输出: False
 * 解释: 
 * 对角线, 比如: "[1, 2]" 上有不同的元素。
 * 注意:
 * matrix (矩阵)是一个包含整数的二维数组。
 * matrix 的行数和列数均在 [1, 20]范围内。
 * matrix[i][j] 包含的整数在 [0, 99]范围内。
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        
