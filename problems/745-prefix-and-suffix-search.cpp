/*
 * [746] Prefix and Suffix Search
 *
 * https://leetcode-cn.com/problems/prefix-and-suffix-search/description/
 * https://leetcode.com/problems/prefix-and-suffix-search/discuss/
 *
 * algorithms
 * Hard (19.75%)
 * Total Accepted:    16
 * Total Submissions: 81
 * Testcase Example:  '["WordFilter","f"]\n[[["apple"]], ["a","e"]]'
 *
 * 给定多个 words，words[i] 的权重为 i 。
 * 设计一个类 WordFilter 实现函数WordFilter.f(String prefix, String suffix)。这个函数将返回具有前缀
 * prefix 和后缀suffix 的词的最大权重。如果没有这样的词，返回 -1。
 * 例子:
 * 输入:
 * WordFilter(["apple"])
 * WordFilter.f("a", "e") // 返回 0
 * WordFilter.f("b", "") // 返回 -1
 * 注意:
 * words的长度在[1, 15000]之间。
 * 对于每个测试用例，最多会有words.length次对WordFilter.f的调用。
 * words[i]的长度在[1, 10]之间。
 * prefix, suffix的长度在[0, 10]之前。
 * words[i]和prefix, suffix只包含小写字母。
 */

#include <iostream>
#include <string>
using namespace std;

class WordFilter {
public:
    WordFilter(vector<string> words) {
        
    }
    
    int f(string prefix, string suffix) {
        
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter obj = new WordFilter(words);
 * int param_1 = obj.f(prefix,suffix);
 */

int main()
{
    Solution s;

    return 0;
}
        
