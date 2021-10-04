### Greedy Algorithm to find Minimum number of Coins
Given a value V, if we want to make a change for V Rs, and we have an infinite supply of each of the denominations in Indian currency, i.e., we have an infinite supply of { 1, 2, 5, 10, 20, 50, 100, 500, 1000} valued coins/notes, what is the minimum number of coins and/or notes needed to make the change?

# Examples:
Example 1:
Input: V = 70

Output: 2

Explanation: We need a 50 Rs note and a 20 Rs note.

Example 2:
Input: V = 121

Output: 3

Explanation: We need a 100 Rs note, a 20 Rs note and a 1 Rs coin.

Complexity Analysis:
Time Complexity: O(V).

Auxiliary Space: O(V).

### Algorithm Hint:
Sort the array of coins in decreasing order.

Initialize result as empty.

Find the largest denomination that is smaller than current amount.

Add found denomination to result. Subtract value of found denomination from amount.

If amount becomes 0, then print result.

Else repeat steps 3 and 4 for new value of V.

# Note:The above approach may not work for all denominations. For example, it doesn’t work for denominations {9, 6, 5, 1} and V = 11. The above approach would print 9, 1 and 1. But we can use 2 denominations 5 and 6. 
For general input, below dynamic programming approach can be used: 
https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/
