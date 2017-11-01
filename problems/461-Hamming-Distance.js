/*
461. Hamming Distance

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 231.

Example:

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

The above arrows point to positions where the corresponding bits are different.

*/

/**
 * @param {number} x
 * @param {number} y
 * @return {number}
 */
var hammingDistance = function(x, y) {
    return (x ^ y).toString(2).split('').filter(element => element === '1').length;
};

var expect = require('chai').expect;
var tests = [
    {x:1, y:4, expected: 2 },
];
tests.forEach(function (test, index) {
    it('Case ' + (index + 1), function () {
        expect(hammingDistance(test.x, test.y)).to.deep.equal(test.expected);
    });
});