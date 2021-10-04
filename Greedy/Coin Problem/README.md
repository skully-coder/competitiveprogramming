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
