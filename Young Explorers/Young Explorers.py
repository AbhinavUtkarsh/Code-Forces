# https://codeforces.com/contest/1355/problem/B
from sys import stdin, stdout

for _ in range(int(stdin.readline())):
    n = int(stdin.readline())
    expi = list(map(int, stdin.readline().split()))
    expi.sort()
    group_count = 0
    i = 0
    l = -1
    while i < n:
        if expi[i] == i - l:
            group_count += 1
            l = i
        i += 1
    print(group_count)
