# Kadane's Algorithm

### An efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers that has the largest sum.

#### Explanation:
1. Look for all positive contiguous segments of the array<br>
2. Save maximum sum contiguous segment among all positive segments in a variable(max_so_far)<br>
3. Compare the positive sum with max_so_far and update max_so_far if it is greater.

#### Example
```
Input: 
8 // size of array
-2 -3 5 -1 -2 1 5 -9 //array numbers

Output: 8
```
