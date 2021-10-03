# Integer to Roman
## Given a string containing Roman Number, convert it to Decimal Number.

<br> 
Roman numerals are represented by seven different symbols: `I, V, X, L, C, D and M.`
```
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
```

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9. 
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90. 
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

### Example 1:
```
Input: "III"
Output: 3
```
### Example 2:
```
Input: "M"
Output: 1000
```
### Example 3:
```
Input: "IX"
Output: 9
