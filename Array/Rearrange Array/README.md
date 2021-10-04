# Rearrange an array with O(1) extra space
Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

Input Format
First line of input contains an integer N.
Second line of input contain an array of integer of size N.

Constraints
```
1 <= N <= 107
0 <= Arr[i] < N
```
Output Format

Output contains an array of size N.

Sample Input
```
N = 2
arr[] = {1,0}

```
Sample Output
```
0 1
```
Explanation
```
arr[arr[0]] = arr[1] = 0.
arr[arr[1]] = arr[0] = 1.

```
