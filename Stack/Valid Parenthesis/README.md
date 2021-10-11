## Problem Statement  
- You have been given a string s which consists of only characters '[', ']', '(', ')', '{', and '}'. Your task is to check whether the string is valid or not.
1. Open brackets has to be closed with closing brackets properly.
2. Open and closed brackets has to be in proper order.

# Input Format

You will be given a string 's'. 

Constraints
```
1 <= s.length <= 104
s consists of parentheses only i.e. '()[]{}'.
```
# Output Format

The task is to complete the function isValid() which takes a string as a parameter. You will have to return true after checking if the string is valid otherwise false.

Sample Input 1
```
"()[]{}"
```
Sample Output  1
```
true
```

Sample Input 2
```
"([)]"
```
Sample Output  2
```
false
```

Explanation
```

All the brackets exists in a pair with proper ordering.
s = "(((}", s = "(]", and s="({[]}]" are invalid.
