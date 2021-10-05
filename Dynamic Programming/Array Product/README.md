# Count Ways to Make Array With Product

You are given a 2D integer array, queries. For each `queries[i]`, where `queries[i] = [ni, ki]`, find the number of different ways you can place positive integers into an array of size n<sub>i</sub> such that the product of the integers is k<sub>i</sub>. As the number of ways may be too large, the answer to the i<sup>th</sup> query is the number of ways modulo 10<sup>9</sup> + 7.

Return an integer array answer where `answer.length == queries.length`, and `answer[i]` is the answer to the i<sup>th</sup> query.

### Example 1:
```
Input: queries = [[2,6],[5,1],[73,660]]
Output: [4,1,50734910]
Explanation: Each query is independent.
[2,6]: There are 4 ways to fill an array of size 2 that multiply to 6: [1,6], [2,3], [3,2], [6,1].
[5,1]: There is 1 way to fill an array of size 5 that multiply to 1: [1,1,1,1,1].
[73,660]: There are 1050734917 ways to fill an array of size 73 that multiply to 660. 1050734917 modulo 109 + 7 = 50734910.
```
### Example 2:
```
Input: queries = [[1,1],[2,2],[3,3],[4,4],[5,5]]
Output: [1,2,3,10,5]
```

### Constraints:

- 1 <= `queries.length` <= 10<sup>4</sup>
- 1 <= n<sub>i</sub>, k<sub>i</sub> <= 10<sup>4</sup>
