# Problem Statement
For a given number N check if it is prime or not. A prime number is a number which is only divisible by 1 and itself.

## Input Format

you will be given an integer of maximum 64 bit N 

## Constraints
```
Expected Time Complexity: O(sqrt(N))
Expected Space Complexity: O(1)

1 <= N <= 10^9
```
## Output Format

```
YES OR NO
```
## Sample Input
```
N = 5
```
## Sample Output
```
YES
```
## Explanation
```
The Miller-Rabin test extends the ideas from the Fermat test.

For an odd number n, n−1 is even and we can factor out all powers of 2. We can write:


If n is prime, then n has to divide one of these factors. And in the Miller-Rabin primality test we check exactly that statement, which is a more stricter version of the statement of the Fermat test. For a base 2≤a≤n−2 we check if either

ad≡1modn
holds or

a2rd≡−1modn
holds for some 0≤r≤s−1.

If we found a base a which doesn't satisfy any of the above equalities, than we found a witness for the compositeness of n. In this case we have proven that n is not a prime number.

Similar to the Fermat test, it is also possible that the set of equations is satisfied for a composite number. In that case the base a is called a strong liar. If a base a satisfies the equations (one of them), n is only strong probable prime. However, there are no numbers like the Carmichael numbers, where all non-trivial bases lie. In fact it is possible to show, that at most 14 of the bases can be strong liars. If n is composite, we have a probability of ≥75% that a random base will tell us that it is composite. By doing multiple iterations, choosing different random bases, we can tell with very high probability if the number is truly prime or if it is composite.
```