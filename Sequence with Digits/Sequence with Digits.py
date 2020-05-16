# https://codeforces.com/contest/1355/problem/0
from sys import stdin, stdout

for i in range(int(input())):
    a, k = map(int, stdin.readline().split())
    if k == 1:
        print(a)
    else:
        while k > 1 and "0" not in str(a):
            digit = list(int(i) for i in str(a))
            a = a + min(digit) * max(digit)
            k -= 1
        print(a)
