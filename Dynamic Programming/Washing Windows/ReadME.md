# Washing Windows

There is a building with N floors (numbered 1 through N from bottom to top); on each floor, there are M windows (numbered 1 through M from left to right). Let's denote the j-th window on the i-th floor by (i,j).

All windows in the building need to be cleaned one by one in a specific order. You are given this order as a matrix A with N rows and M columns; for each valid i and j, the window (i,j) must be cleaned on the AN−i+1,j-th turn.

Whenever we clean a window (i,j), it becomes clean, but the dirty water used for cleaning it flows down to windows (i−1,j−1), (i−1,j) and (i−1,j+1) (more precisely, to all of these windows which exist), so these windows become dirty again. Then, the water flows further down, so the same applies for other windows below: whenever a window (i,j) becomes dirty, windows (i−1,j−1), (i−1,j) and (i−1,j+1) become dirty as well. For example, cleaning a window (5,3) will make the window (3,2) dirty. The next window is cleaned only after water flows down completely. Note that each window is cleaned only once and there may be dirty windows at the end.

For each window, determine whether it will be clean after the cleaning process ends.

### Example 1:
```
Input:  
1
3 4
1 3 7 10
9 2 4 11
8 12 5 6

Output: 
1111
1001
0100
```

### Constraints:
- 1≤T≤1,000 
- 1≤N,M≤103
- 1≤Ai,j≤N⋅M for each valid i,j
- the elements of the matrix A are pairwise distinct
