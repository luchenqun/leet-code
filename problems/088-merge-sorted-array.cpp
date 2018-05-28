/*
 * [88] Merge Sorted Array
 *
 * https://leetcode-cn.com/problems/merge-sorted-array/description/
 *
 * algorithms
 * Easy (33.21%)
 * Total Accepted:    2.9K
 * Total Submissions: 8.6K
 * Testcase Example:  '[1,2,3,0,0,0]\n3\n[2,5,6]\n3'
 *
 * 给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。
 * 说明:
 * 初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
 * 你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
 * 示例:
 * 输入:
 * nums1 = [1,2,3,0,0,0], m = 3
 * nums2 = [2,5,6],       n = 3
 * 输出: [1,2,2,3,5,6]
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

auto print = [](vector<int> &digits) {
    for (auto &num : digits)
    {
        cout << num << " ";
    }
    cout << endl;
};

class Solution
{
  public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        copy_n(nums2.begin(), n, nums1.begin() + m);
        sort(nums1.begin(), nums1.begin() + m + n);
    }
    void merge(int A[], int m, int B[], int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (i >= 0 && j >= 0)
        {
            if (A[i] > B[j])
                A[k--] = A[i--];
            else
                A[k--] = B[j--];
        }
        while (j >= 0)
            A[k--] = B[j--];
    }
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1, j = n - 1, tar = m + n - 1;
        while (j >= 0)
        {
            if (i >= 0)
            {
                nums1[tar--] = nums2[j] > nums1[i] ? nums2[j--] : nums1[i--];
            }
            else
            {
                nums1[tar--] = nums2[j--];
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    s.merge(nums1, 3, nums2, 3);

    return 0;
}
