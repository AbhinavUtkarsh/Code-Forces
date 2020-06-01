# https://www.codechef.com/COOK118B/problems/CHEFRECP

for _ in range(int(input())):
    n = int(input())
    listy = list(map(int, input().split()))
    hashtable = {}
    for i in range(n):
        if listy[i] not in hashtable:
            hashtable[listy[i]] = 1
        else:
            hashtable[listy[i]] += 1
    hashlist = []
    flag = 0
    for i in range(n - 1):
        if listy[i] != listy[i + 1] and listy[i] not in hashlist:
            hashlist.append(listy[i])
        elif listy[i] in hashlist:
            print("NO")
            flag = 1
            break
    for i in range(len(hashlist) - 1):
        for j in range(i + 1, len(hashlist)):
            if hashtable[hashlist[i]] == hashtable[hashlist[j]] and flag != 1:
                print("NO")
                flag = 1
                break
    if flag == 0:
        print("YES")
