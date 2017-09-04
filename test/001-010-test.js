var mocha = require('mocha');
var chai = require('chai');
var expect = chai.expect;

var skip = it.skip;
var only = it.only;

describe("001 Two Sum Test Cases", function () {
    var twoSum = require('../problems/001-Two-Sum.js');
    var tests = [
        { nums: [2, 7, 11, 15], target: 9, expected: [0, 1] },
        { nums: [2, 7, 11, 15], target: 17, expected: [0, 3] },
        { nums: [1, 2], target: 3, expected: [0, 1] },
        { nums: [3, 3], target: 6, expected: [0, 1] },
    ];

    tests.forEach(function (test, index) {
        it('Two Sum Case' + (index + 1), function () {
            expect(twoSum(test.nums, test.target)).to.deep.equal(test.expected);
        });
    });
})

describe("002 Add Two Numbers Test Cases", function () {
    var addTwoNumbers = require('../problems/002-Add-Two-Numbers.js');

    
    

    var tests = [
        { num1: [1], num2: [9, 9], expected: [0, 0, 1] },
        { num1: [1, 6, 3], num2: [4, 2, 3], expected: [5, 8, 6] },
        { num1: [1, 2, 3], num2: [1, 2, 3], expected: [2, 4, 6] },
        { num1: [0], num2: [0], expected: [0] },
        { num1: [7, 9, 9], num2: [0], expected: [7, 9, 9] },
        { num1: [2, 4, 3], num2: [5, 6, 4], expected: [7, 0, 8] },
        { num1: [5, 4, 3], num2: [5, 9, 4, 3, 1, 9], expected: [0, 4, 8, 3, 1, 9] },
        { num1: [0,8,6,5,6,8,3,5,7], num2: [6,7,8,0,8,5,8,9,7], expected: [6,5,5,6,4,4,2,5,5,1] },
        { num1: [2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,9], num2: [5,6,4,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,2,4,3,9,9,9,9], expected: [7,0,8,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,4,8,6,1,4,3,9,1] },
    ];

    var ListNode = function (val) {
        this.val = val;
        this.next = null;
    }

    var numsToNode = function (nums) {
        var retNode = null;
        var node = null;
        var pre = null;
        nums.forEach((num, index) => {
            var node = new ListNode(num);
            if (index === 0) {
                retNode = node;
            } else {
                pre.next = node;
            }
            pre = node;
        })
        return retNode;
    }

    tests.forEach(function (test, index) {
        it('Add Two Numbers Case' + (index + 1), function () {
            var node1 = numsToNode(test.num1);
            var node2 = numsToNode(test.num2);

            var nodeRet = addTwoNumbers(node1, node2);
            var retArray = [];
            do {
                retArray.push(nodeRet.val);
                nodeRet = nodeRet.next
            } while (nodeRet)

            expect(retArray).to.deep.equal(test.expected);
        });
    });
})

describe("007 Reverse Integer Test Cases", function () {
    var reverse = require('../problems/007-Reverse-Integer.js');
    var tests = [
        { num: 123, expected: 321 },
        { num: -123, expected: -321 },
        { num: 0, expected: 0 },
        { num: -0, expected: -0 },
        { num: -Math.pow(2, 31), expected: 0 },
        { num: Math.pow(2, 31) - 1, expected: 0 },
        { num: -0, expected: -0 },
    ];

    tests.forEach(function (test, index) {
        it('Reverse Integer Case' + (index + 1), function () {
            expect(reverse(test.num)).to.equal(test.expected);
        });
    });
})