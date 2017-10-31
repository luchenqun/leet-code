/*
657. Judge Route Circle

Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.
The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:
Input: "UD"
Output: true

Example 2:
Input: "LL"
Output: false

*/

/**
 * @param {string} moves
 * @return {boolean}
 */
var judgeCircle = function (moves) {
    var oriPos = {
        x: 0,
        y: 0,
    }
    var dir = {
        'U': { x: 0, y: +1 },
        'D': { x: 0, y: -1 },
        'L': { x: -1, y: 0 },
        'R': { x: +1, y: 0 },
    }

    for (let move of moves) {
        oriPos.x += dir[move].x;
        oriPos.y += dir[move].y;
    }

    return (oriPos.x === 0 && oriPos.y === 0);
};

var expect = require('chai').expect;
var tests = [
    { moves: "UD", expected: true },
    { moves: "LL", expected: false },
    { moves: "LRLRRDURLU", expected: false },
];
tests.forEach(function (test, index) {
    it('Case ' + (index + 1), function () {
        expect(judgeCircle(test.moves)).to.deep.equal(test.expected);
    });
});