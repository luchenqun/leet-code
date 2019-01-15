/*
 * [136] Single Number
 *
 * https://leetcode-cn.com/problems/single-number/description/
 * https://leetcode.com/problems/single-number/discuss/
 *
 * algorithms
 * Easy (48.83%)
 * Total Accepted:    6.3K
 * Total Submissions: 12.9K
 * Testcase Example:  '[2,2,1]'
 *
 * 给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
 * 说明：
 * 你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？
 * 示例 1:
 * 输入: [2,2,1]
 * 输出: 1
 * 示例 2:
 * 输入: [4,1,2,1,2]
 * 输出: 4
 */
// 异或：相同为0，不同为1. 异或同一个数两次，原数不变。

package main

import "fmt"

func singleNumber(nums []int) int {
	numsMap := make(map[int]int)
	for _, num := range nums {
		if _, exists := numsMap[num]; exists {
			numsMap[num] = 2
		} else {
			numsMap[num] = 1
		}
	}
	for _, num := range nums {
		if numsMap[num] == 1 {
			return num
		}
	}

	return 0
}

func main() {
	fmt.Println(singleNumber([]int{2, 2, 1}))
	fmt.Println(singleNumber([]int{4, 1, 2, 1, 2}))
	fmt.Println(singleNumber([]int{1}))
}
