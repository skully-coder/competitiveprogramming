T = {0:0, 1:1, 2:1}

def tribonacci(n):
  if n not in T:
    T[n] = self.tribonacci(n - 3) + self.tribonacci(n - 2) + self.tribonacci(n - 1)
  return T[n]

N = int(input())
print(tribonacci(N))
