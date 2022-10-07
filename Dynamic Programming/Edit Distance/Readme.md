# Edit Distance

The edit distance between two strings is the minimum number of operations required to transform one string into the other.

The allowed operations are:
<ul>
    <li>Add one character to the string.</li>
    <li>Remove one character from the string.</li>
    <li>Replace one character in the string.</li>
</ul>

For example, the edit distance between LOVE and MOVIE is 2, because you can first replace L with M, and then add I.

Your task is to calculate the edit distance between two strings.

### Input:
```
The first argument of input contains a string, A.
The second argument of input contains a string, B.
```
### Output:
```
Return an integer, representing the minimum number of steps required.
```

### Constraints:

- 1 <= length(A), length(B) <= 450

### Example:
Input 1:<br>
    A = "abad"<br>
    B = "abac"

Output 1:<br>
    1

Explanation 1:<br>
    Operation 1: Replace d with c.