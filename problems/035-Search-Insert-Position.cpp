/**
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
  }
};

int main()
{
  vector<int> nums1{1, 3, 5, 6};
  int target1 = 5;
  vector<int> nums2{1, 3, 5, 6};
  int target2 = 2;
  vector<int> nums3{1, 3, 5, 6};
  int target3 = 7;
  vector<int> nums4{1, 3, 5, 6};
  int target4 = 0;
  vector<int> nums5{1, 3, 5, 7, 9};
  int target5 = 5;

  Solution s;
  cout << s.searchInsert(nums1, target1) << endl;
  cout << s.searchInsert(nums2, target2) << endl;
  cout << s.searchInsert(nums3, target3) << endl;
  cout << s.searchInsert(nums4, target4) << endl;
  cout << s.searchInsert(nums5, target5) << endl;

  return 0;
}