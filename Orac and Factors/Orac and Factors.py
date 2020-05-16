# https://codeforces.com/contest/1350/problem/A
def isprime(num):
    if num <= 1:
        return False
    if num <= 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True


def least_factor(num):
    # print(isprime(num))
    if isprime(num):
        return num
    else:
        factor = 0
        for i in range(2, num + 1):
            if num % i == 0:
                factor = i
                break
        return factor


for i in range(int(input())):
    n, k = map(int, input().split())
    if n % 2 == 0:
        print(n + 2 * k)
        continue
    else:
        least = least_factor(n)
        # print(least)
        print(n + least + 2 * (k - 1))
