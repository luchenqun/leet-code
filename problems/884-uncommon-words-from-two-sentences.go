/*
 * [920] 相似度为 K 的字符串
 *
 * https://leetcode-cn.com/problems/uncommon-words-from-two-sentences/description/
 * https://leetcode.com/problems/uncommon-words-from-two-sentences/discuss/
 *
 * algorithms
 * Easy (51.82%)
 * Total Accepted:    2.4K
 * Total Submissions: 4.6K
 * Testcase Example:  '"this apple is sweet"\n"this apple is sour"'
 *
 * 给定两个句子 A 和 B 。 （句子是一串由空格分隔的单词。每个单词仅由小写字母组成。）
 * 如果一个单词在其中一个句子中只出现一次，在另一个句子中却没有出现，那么这个单词就是不常见的。
 * 返回所有不常用单词的列表。
 * 您可以按任何顺序返回列表。
 * 示例 1：
 * 输入：A = "this apple is sweet", B = "this apple is sour"
 * 输出：["sweet","sour"]
 * 示例 2：
 * 输入：A = "apple apple", B = "banana"
 * 输出：["banana"]
 * 提示：
 * 0 <= A.length <= 200
 * 0 <= B.length <= 200
 * A 和 B 都只包含空格和小写字母。
 */

package main

import (
	"fmt"
	"strings"
)

func uncommonFromSentences(A string, B string) []string {
	sliceA := strings.Split(A, " ")
	sliceB := strings.Split(B, " ")
	var sliceRet []string

	mapA := make(map[string]int)
	mapB := make(map[string]int)

	for _, value := range sliceA {
		if _, exists := mapA[value]; exists {
			mapA[value] = mapA[value] + 1
		} else {
			mapA[value] = 1
		}
	}

	for _, value := range sliceB {
		if _, exists := mapB[value]; exists {
			mapB[value] = mapB[value] + 1
		} else {
			mapB[value] = 1
		}
	}

	for key, cnt := range mapA {
		if _, exists := mapB[key]; !exists {
			if cnt == 1 {
				sliceRet = append(sliceRet, key)
			}
		}
	}
	for key, cnt := range mapB {
		if _, exists := mapA[key]; !exists {
			if cnt == 1 {
				sliceRet = append(sliceRet, key)
			}
		}
	}
	return sliceRet
}

func main() {
	fmt.Println(uncommonFromSentences("this apple is sweet", "this apple is sour"))
	fmt.Println(uncommonFromSentences("apple apple", "banana"))
	fmt.Println(uncommonFromSentences("", ""))
}
