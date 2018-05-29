/*
 * [436] Find Right Interval
 *
 * https://leetcode-cn.com/problems/find-right-interval/description/
 * https://leetcode.com/problems/find-right-interval/discuss/
 *
 * algorithms
 * Medium (33.33%)
 * Total Accepted:    39
 * Total Submissions: 117
 * Testcase Example:  '[[1,2]]'
 *
 * 给定一组区间，对于每一个区间 i，检查是否存在一个区间 j，它的起始点大于或等于区间 i 的终点，这可以称为 j 在 i 的“右侧”。
 * 对于任何区间，你需要存储的满足条件的区间 j 的最小索引，这意味着区间 j 有最小的起始点可以使其成为“右侧”区间。如果区间 j 不存在，则将区间 i
 * 存储为 -1。最后，你需要输出一个值为存储的区间值的数组。
 * 注意:
 * 你可以假设区间的终点总是大于它的起始点。
 * 你可以假定这些区间都不具有相同的起始点。
 * 示例 1:
 * 输入: [ [1,2] ]
 * 输出: [-1]
 * 解释:集合中只有一个区间，所以输出-1。
 * 示例 2:
 * 输入: [ [3,4], [2,3], [1,2] ]
 * 输出: [-1, 0, 1]
 * 解释:对于[3,4]，没有满足条件的“右侧”区间。
 * 对于[2,3]，区间[3,4]具有最小的“右”起点;
 * 对于[1,2]，区间[2,3]具有最小的“右”起点。
 * 示例 3:
 * 输入: [ [1,4], [2,3], [3,4] ]
 * 输出: [-1, 2, -1]
 * 解释:对于区间[1,4]和[3,4]，没有满足条件的“右侧”区间。
 * 对于[2,3]，区间[3,4]有最小的“右”起点。
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<int> findRightInterval(vector<Interval>& intervals) {
        
    }
};

int main()
{
    Solution s;

    return 0;
}
        