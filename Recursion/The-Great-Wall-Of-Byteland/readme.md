# The Great Wall of Byteland

In order to protect the southern border of Bytelandian Empire against intrusions by various nomadic groups, the Emperor of Byteland has decided to build a wall along the southern border. The best architect Johny is recruited for the task.

In order to minimise the cost of raw material, Johny is restricted to use only following two kinds of building blocks:
X     #
XX
The height of the wall is fixed and is 2 units, but the length of the wall varies. As a part of his job Johny needs to find out the number of ways he can construct the wall using above two types of building blocks where the length of the wall is specified. Write a program to help Johny. 

 
### Input format:
```
The first line contains the number of test cases T followed by T lines. Each of the next
lines contains an integer N representing the length of the wall. 
```

### Output format:
```
Print T lines one for each test case, containing an integer that represents the
number of ways of constructing the wall, modulo 1000000007. 
```

### Constraints:
```
1<=T<=1000 1<=N<=10^9
```

### Sample Input
```
3
7
2
13
```

### Sample Output
```
655
5
272767
```

### Explaination
```
Explanation of 2nd Test Case N=2 The wall can be constructed in following 5 ways:
## ##
X# XX
# X XX
XX X#
XX# X
```
