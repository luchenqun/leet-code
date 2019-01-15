/*
 * [190] Reverse Bits
 *
 * https://leetcode-cn.com/problems/reverse-bits/description/
 * https://leetcode.com/problems/reverse-bits/discuss/
 *
 * algorithms
 * Easy (27.87%)
 * Total Accepted:    998
 * Total Submissions: 3.6K
 * Testcase Example:  '           0 (00000000000000000000000000000000)'
 *
 * 颠倒给定的 32 位无符号整数的二进制位。
 * 示例:
 * 输入: 43261596
 * 输出: 964176192
 * 解释: 43261596 的二进制表示形式为 00000010100101000001111010011100 ，
 * 返回 964176192，其二进制表示形式为 00111001011110000010100101000000 。
 * 进阶:
 * 如果多次调用这个函数，你将如何优化你的算法？
 */

package main

import "fmt"

func reverseBits(num uint32) uint32 {
	var ret uint32 = 0
	const Bits uint8 = 32
    var i uint8 = 0
	for i = 0; i < Bits; i++ {
	    bit := (num >> i) & 1
        ret |= bit << (Bits - i - 1)
	}

	return ret
}

func main() {
	fmt.Println(reverseBits(43261596))
}
