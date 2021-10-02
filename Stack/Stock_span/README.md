## Problem Statement  
- Given a list of prices of a single stock for N number of days, find stock span for each day. Stock span is defined as a number of consecutive days prior to the current day when the price of a stock was less than or equal to the price at current day.

# Input Format

you will be given the size of array n . This will be followed by the elements of the array A0  . . . A n-1.

Constraints
```
1 ≤ N ≤ 105
1 ≤ C[i] ≤ 105
```
# Output Format

The task is to complete the function calculateSpan() which takes two parameters, an array price[] denoting the price of stocks, and an integer N denoting the size of the array and number of days. This function finds the span of stock's price for all N days and returns an array of length N denoting the span for the i-th day

Sample Input
```
7
100 80 60 70 60 75 85
```
Sample Output
```
1 1 1 2 1 4 6
```
Explanation
```

 Traversing the given input span for 10 
will be 1, 4 is smaller than 10 so the 
span will be 1, 5 is greater than 4 so 
the span will be 2 and so on. Hence, the 
output will be 1 1 2 4 5 1
