/*
7. Reverse Integer
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

click to show spoilers.

Note:
The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.

反转一个int整数。
x = 123 , return 321 x = -123 , return -321
提示：
假如10，100反转后会长怎样。
你有注意到反转后的数可能会超过Integer的范围吗，例如说1000000003反转后就超过了32-bit的integer。这种情况要怎么处理?
在这个问题中，超过integer只要回传0就可以。

*/

/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    var num = 0;

    num = Number(x).toString().split('').reverse();
    var last = num.pop();
    last === '-' ? num.unshift('-') : num.push(last);
    num = parseInt(num.join(''));

    if (num >= -Math.pow(2, 31) && num <= Math.pow(2, 31) - 1) {

    } else {
        num = 0;
    }
    return num;
};

module.exports = reverse;