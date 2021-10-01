Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. 
For simplicity, assume that all bars have same width and the width is 1 unit. 

Time Complexity: Since every bar is pushed and popped only once, the time complexity of this method is O(n).

Approach :  By finding next smaller element and previous smaller element for every element in O(n) time complexity and O(n) auxiliary space .

Step 1 : First we will take two arrays left_smaller[] and right_smaller[] and initialize it with -1 and n respectively.

Step 2 : For every element we will store the index of previous smaller and next smaller element in left_smaller[] and right_smaller[] arrays respectively.

                (It will take O(n) time).

Step 3 : Now for every element we will calculate area by taking this ith element as the smallest in the range left_smaller[i] and right_smaller[i] and multiplying it with the difference of left_smaller[i] and right_smaller[i].

Step 4 : We can find the maximum of all the area calculated in step 3 to get the desired maximum area.

Example 1:
Input: n = 7
       arr={6, 2, 5, 4, 5, 1, 6}
Output: 12

