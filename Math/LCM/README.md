# LCM (Least Common Multiple) of two numbers is the smallest number which can be divided by both numbers. 

For example, LCM of 15 and 20 is 60, and LCM of 5 and 7 is 35.

A simple solution is to find all prime factors of both numbers, then find union of all factors present in both numbers. Finally, return the product of elements in union.

An efficient solution is based on the below formula for LCM of two numbers ‘a’ and ‘b’. 

   a x b = LCM(a, b) * GCD (a, b)

   LCM(a, b) = (a x b) / GCD(a, b)