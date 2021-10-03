import math

def total(g):
    # g = size of consecutive groups after the first one
    if g <= 0:
        return 0
    first = N - g * (D - 2) - 1
    f = (L - first) // g
    if first < g or A - f <= 0 or first + g * (A - 1) < L:
        return 0
    partial = int((2 * (A - 1) - f + 1) / 2 * f)
    left = (A - f - 1) * (-f * g + L - first)
    return first * A + partial * g + left

for _ in range(int(input())):
    L, A, N, D = map(int, input().strip().split())
    if D == 1:
        print(L * A)
        continue
    if D == 2:
        n1 = (N - 1)
        if n1 * A >= L:
            ln1 = L // n1
            print(int((2 * A + 1 - ln1) / 2 * ln1 * n1) + (A - ln1) * (L - ln1 * n1))
            continue
        else:
            print('SAD')
            continue
    if A == 1:
        print('SAD')
        continue
    if A == 2:
        if D == 2 and (N - D + 1) * 2 >= L:
            print(N - D + L + 1)
            continue
        else:
            print('SAD')
            continue

    g = math.ceil((L - A - N + D) / (A - 2))
    if g > N - D:
        print('SAD')
        continue
    else:
        # I did the math
        # ArgMax of total, A > 2 and D > 2
        argmax = int(math.sqrt((2 - 3 * D + D * D) * (1 + L - N) * (1 + L - N)) / (2 - 3 * D + D * D)) + 1
        if (D == 3 or D == 4 and A > 2) or (D > 4 and A > D - 2):
            # region where enough items are in A (A - f > 0)
            argmax = max(int((1 + L - N) / (2 + A - D)), argmax)
            # region where first group is the largest (first >= g)
            argmax = min(int((N - 1) / (D - 1)), argmax)
            # region where total number of items is at least L (first + g * (A - 1) >= L)
            if D == 3 or A > D - 1:
                argmax = max(int((1 + L - N) / (1 + A - D)), argmax)
            elif D > 3 and A < D - 1:
                argmax = min(int((1 + L - N) / (1 + A - D)), argmax)
        max_haul = max(total(argmax - 1), total(argmax), total(argmax + 1))
        print(max_haul if max_haul else 'SAD')
                    
