# complete_arithmetic
## Problem Statement
```
Given a list of integers nums that used to be an arithmetic sequence. 
Given that a number was removed, and that the number was not the first or the last element, 
return the removed number. 
```
   
## Approach  
missing_num = full_sum - current_sum  
full_sum = n/2*(seq[0]+seq[last]) {Arithmetic mean sum folrmula,n=len(sequence given)+1}   
current_sum = sum of elements given in sequence list  
   
## Example
### Input
```
nums = 1 3 5 9
```
### Output
```
7
```
 