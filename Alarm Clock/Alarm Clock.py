# https://codeforces.com/contest/1354/problem/0
import math

for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    if a <= b:
        print(b)
    elif d >= c:
        print(-1)
    else:
        n = int(math.ceil((a - b) / (c - d)))
        total_time = b + ((n) * (c))
        print(total_time)
