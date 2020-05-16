#https://codeforces.com/contest/1352/problem/A
for i in range(int(input())):
    number=int(input())
    i=1
    res=[]
    while(number!=0):
        digit=number%10
        if digit!=0:
            res.append(digit*i)
        i*=10
        number=number//10
    print(len(res),*res)