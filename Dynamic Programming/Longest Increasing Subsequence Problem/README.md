# Length of Longest Increasing Subsequence ProblemLongest Increasing Subsequence Problem

A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, `[3,6,2,7]` is a subsequence of the array `[0,3,1,6,2,2,7]`.

The longest increasing subsequence is a subsequence of a given sequence in which the subsequence elements are in sorted order (strictly increasing), lowest to highest, and in which the subsequence is as long as possible.

We are given an array with n numbers: a[0…n−1]
The task is to find the length of the longest, strictly increasing, subsequence in a

To accomplish this task we define an array `dp[0...n-1]`, where dp[i] is the length of the longest increasing subsequence that ends in the element at index i. We will compute this array gradually first dp[0], then dp[1], and so on. After all the values are computed the answer is the maximum value in d

Now that we understand the problem and have a basic idea on how the solution would be, the next step is to form a recurrence relation! In this case the recurrence relation would be divided on the basis of two cases:

`
if dp[i] = 1: the required subsequence consisrs of only the element a[i]
`

`
if dp[i] > 1: check if there is an index j=0...i-1, where a[j] < a[i], then dp[i] = max(dp[i], dp[j]+1)
`

### Example

```
Input: 
6
1 2 4 4 5 3

Output:
4
```

### Constraints
1 ≤ n ≤ 5,100
