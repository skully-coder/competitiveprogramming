Question --


Given an unsorted array of integers nums, find the length of the longest sequence of consecutive elements.

Constraints

n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [100, 4, 200, 1, 3, 2]
Output
4
Explanation
The longest sequence of consecutive elements is [1, 2, 3, 4]. so we return its length: 4.

Example 2
Input
nums = [100, 4, 200, 1, 3, 2, 101, 105, 103, 102, 104]
Output
6
Explanation
The longest sequence of consecutive elements is [100, 101, 102, 103, 104, 105]. so we return its length: 6.


----------------------------------------------------------------------------------------------------------------------
Intuition
Let's say we have number i. If i is a consecutive sequence, the sequence would be
[...i-2,i-1]+[i]+[i+1,i+2+...]

Implementation
We first use the hashTable to store the frequency of each number. Then we traverse the array. The element of the array is what I call I. This I must belongs to some sequence in the format of [...i-2,i-1]+[i]+[i+1,i+2+...]. We start with I and do a left/right traverse. Meanwhile, we will update our hashTable for avoiding duplicate check.

Time Complexity
O(n). Time Complexity is O(n) since every number is visited at most twice.

Space Complexity
O(n) - We use an unordered_map to store the whole array in a format of [value:frequency]

