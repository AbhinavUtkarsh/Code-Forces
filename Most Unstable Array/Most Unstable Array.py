# https://codeforces.com/contest/1353/problem/A

for i in range(int(input())):
    n, m = map(int, input().split())
    if n == 1:
        print(0)
    elif n == 2:
        print(m)
    else:
        print(2 * m)
