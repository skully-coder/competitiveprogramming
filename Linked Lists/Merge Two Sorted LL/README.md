# Merge two sorted linked lists

# Problem Statement
Given two sorted linked lists consisting of N and M nodes respectively.
The task is to merge both of the list (in-place) and return head of the merged list.

# Example 1
Input:
N = 4, M = 3
ArrayN = { 5, 10, 15, 40 }
ArrayM = {2, 3, 20}
Output: 2 3 5 10 15 20 40
Explanation: After merging the two linked lists, we have merged list as 2, 3, 5, 10, 15, 20, 40.

# Example 2
Input:
N = 2, M = 2
ArrayN = { 1, 1 }
ArrayM = { 2, 4 }
Output: After merging the two linked lists, we have merged list as 1 1 2 4

# Explanation / Solution

- Detecting which is the starting point of the new sorted merged list i.e., the one with minimum value of the first element of both the list.
- Running loop untill any one of the head node reaches its end of list.
- Detecting which head node has reached the end and prospectively chossing the other head and iterating till the end of list and adding to the head->next pointer link.
- returning the new head.


