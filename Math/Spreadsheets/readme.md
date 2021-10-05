# Spreadsheets

## Codeforces Beta Round #1

## Problem Link: https://codeforces.com/contest/1/problem/B

Problem: 
In the popular spreadsheets systems (for example, in Excel) the following numeration of columns is used. The first column has number A, the second — number B, etc. till column 26 that is marked by Z. Then there are two-letter numbers: column 27 has number AA, 28 — AB, column 52 is marked by AZ. After ZZ there follow three-letter numbers, etc.

The rows are marked by integer numbers starting with 1. The cell name is the concatenation of the column and the row numbers. For example, BC23 is the name for the cell that is in column 55, row 23.

Sometimes another numeration system is used: RXCY, where X and Y are integer numbers, showing the column and the row numbers respectfully. For instance, R23C55 is the cell from the previous example.

Your task is to write a program that reads the given sequence of cell coordinates and produce each item written according to the rules of another numeration system.

Input
The first line of the input contains integer number n (1 ≤ n ≤ 105), the number of coordinates in the test. Then there follow n lines, each of them contains coordinates. All the coordinates are correct, there are no cells with the column and/or the row numbers larger than 106 .

Output
Write n lines, each line should contain a cell coordinates in the other numeration system.

Ex:
Input:
2
R233C55
BC23
Output:
BC23
R23C55

Problem explanation:
In this problem, we have to interconvert between the two formats of naming a cell in common spreadsheets. We have n testcases and for each testcase, we can be given the cell name in either:
1) R<row_number>C<column_number>   or
2) <column_name><row_number>
eg: R23C55 and BC23 represent the same cell in the two formats respectively.

Approach;
I take the input for each testcase in the form of a string in the strinf type variable s. 
Then I check if there is any alphabet after the first occurrence of a digit.
If such an alphabet is found, the string belongs to case 2, else it is case 1.

In case1(), using stringstream, I dump the R and C characters and store the  values of row and column in r and c respectively.
Then I cnvert the column to alphabets using the while loop and concatenate it to get the result in the required format.

In case2(), exact opposite occers and I calculate the intergral value using weights of each letter and then adding to get the required result.

Time Complexity of code: O(t)

