for _ in range(int(input())):
    size, required = map(int, input().split())
    listy = list(map(int, input().split()))
    hashtable = {0: 0, 1: 0}
    for i in listy:
        if i % 2 == 0:
            hashtable[0] += 1
        else:
            hashtable[1] += 1
    # print(hashtable)
    
