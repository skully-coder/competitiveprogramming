//seema kumari patel 03-oct-21

SORTING 0 1 2 ELEMENTS IN ARRAY

Given an array A[] consisting 0s, 1s and 2s. 
The task is to write a program that sorts the given array. 
The functions should put all 0s first, then all 1s and all 2s in last.

Examples: 
Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}

Input: {0, 1, 1, 0, 1,  0, 0, 0, 1}
Output: {0, 0, 0, 0, 0, 1,1, 1, 1}
 
Algorithm: 
1. Keep three counter c0 to count 0s, c1 to count 1s and c2 to count 2s.
2. Traverse through the array and increase the count of c0 if the element is 0,increase the count of c1 if the element is 1 and increase the count of c2 if the element is 2
3. Now again traverse the array and replace first c0 elements with 0, next c1 elements with 1 and next c2 elements with 2.