#https://codeforces.com/contest/1342/problem/B
for i in range(int(input())):
    String=input()
    print("".join(set(String))*len(String))