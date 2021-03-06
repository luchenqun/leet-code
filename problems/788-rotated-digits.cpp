/*
 * [804] Rotated Digits
 *
 * https://leetcode-cn.com/problems/rotated-digits/description/
 * https://leetcode.com/problems/rotated-digits/discuss/
 *
 * algorithms
 * Easy (44.30%)
 * Total Accepted:    345
 * Total Submissions: 776
 * Testcase Example:  '10'
 *
 * 我们称一个数 X 为好数, 如果它的每位数字逐个地被旋转 180 度后，我们仍可以得到一个有效的，且和 X 不同的数。要求每位数字都要被旋转。
 * 如果一个数的每位数字被旋转以后仍然还是一个数字， 则这个数是有效的。0, 1, 和 8 被旋转后仍然是它们自己；2 和 5 可以互相旋转成对方；6 和
 * 9 同理，除了这些以外其他的数字旋转以后都不再是有效的数字。
 * 现在我们有一个正整数 N, 计算从 1 到 N 中有多少个数 X 是好数？
 * 示例:
 * 输入: 10
 * 输出: 4
 * 解释: 
 * 在[1, 10]中有四个好数： 2, 5, 6, 9。
 * 注意 1 和 10 不是好数, 因为他们在旋转之后不变。
 * 注意:
 * N 的取值范围是 [1, 10000]。
 */

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

class Solution
{
  public:
    Solution()
    {
        ans.fill(0);
        ans[0] = 0;
        size_t size = ans.size();
        for (size_t i = 1; i < size; i++)
        {
            ans[i] = ans[i - 1] + (isRotate(i) ? 1 : 0);
        }
    }

    bool isRotate(int num)
    {
        return canRotate(num) ? num != numRotate(num) : false;
    }

    int numRotate(int num)
    {
        int mapping[10];
        mapping[0] = 0;
        mapping[1] = 1;
        mapping[2] = 5;
        mapping[5] = 2;
        mapping[6] = 9;
        mapping[8] = 8;
        mapping[9] = 6;
        int ret = 0;
        int carry = 1;
        while (num > 0)
        {
            ret = ret + mapping[num % 10] * carry;
            carry *= 10;
            num /= 10;
        }
        return ret;
    }

    bool canRotate(int num)
    {
        while (num > 0)
        {
            int cur = num % 10;
            if (cur == 3 || cur == 4 || cur == 7)
                return false;
            num /= 10;
        }
        return true;
    }

    bool isValid(int N)
    {
        /* Valid if N contains ATLEAST ONE 2, 5, 6, 9 AND NO 3, 4 or 7s */
        bool validFound = false;
        while (N > 0)
        {
            if (N % 10 == 2)
                validFound = true;
            if (N % 10 == 5)
                validFound = true;
            if (N % 10 == 6)
                validFound = true;
            if (N % 10 == 9)
                validFound = true;
            if (N % 10 == 3)
                return false;
            if (N % 10 == 4)
                return false;
            if (N % 10 == 7)
                return false;
            N = N / 10;
        }
        return validFound;
    }

    int rotatedDigits(int N)
    {
        return ans[N];
    }

  private:
    array<int, 10001> ans;
};

int main()
{
    Solution s;

    cout << s.rotatedDigits(10) << endl;

    return 0;
}
