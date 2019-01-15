/*
 * [169] Majority Element
 *
 * https://leetcode-cn.com/problems/majority-element/description/
 * https://leetcode.com/problems/majority-element/discuss/
 *
 * algorithms
 * Easy (47.00%)
 * Total Accepted:    1.7K
 * Total Submissions: 3.6K
 * Testcase Example:  '[3,2,3]'
 *
 * 给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
 * 你可以假设数组是非空的，并且给定的数组总是存在众数。
 * 示例 1:
 * 输入: [3,2,3]
 * 输出: 3
 * 示例 2:
 * 输入: [2,2,1,1,1,2,2]
 * 输出: 2
 */

package main

import "fmt"

func majorityElement(nums []int) int {
	mapNums := make(map[int]int)
	lenNums := len(nums)
	for _, num := range nums {
		if _, exists := mapNums[num]; exists {
			mapNums[num] = mapNums[num] + 1
		} else {
			mapNums[num] = 1
		}
		if mapNums[num] > lenNums/2 {
			return num
		}
	}
	return 0
}

func main() {
	fmt.Println(majorityElement([]int{1}))
}
