/*
1. Two Sum
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

给一个里面元素为int的阵列，阵列中会有两个元素加起来等于target，回传这两个元素的位置。 +

范例：
[2, 7, 11, 15], target = 9，2+7=9，因此回传[1,2]

*/


// 需要注意的点是 nums = [3, 3] , target = 6。

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    var ret = [];
    let index1 = 0;
    let index2 = 0;
    for (let num of nums) {
        if ((index2 = nums.lastIndexOf(target - num)) > index1) {
            ret.push(index1, index2);
            break;
        }
        index1++;
    }
    return ret;
};

module.exports = twoSum;