#https://codeforces.com/contest/1342/problem/A
for i in range(int(input())):
    x,y=map(int,input().split())
    a,b=map(int,input().split())
    Cost=(min(x,y)*b)+((max(x,y)-min(x,y))*a)
    if ((x+y)*a)<Cost:
        print((x+y)*a)
    else:
        print(Cost)