import random
def func(list1,n):
    x = list1[0]
    cap = 0
    for i in range(0, n):
        if x >= list1[i]:
            x = list1[i]
        cap += x
    return cap
t=int(input())
#t=random.randint(1,10)
#print(t)
for i in range(0,t):
    #list1=list()
    n=int(input())
    #n=random.randint(1,10)
    #print(n)
    #for j in range(0,n):
    #    m=random.randint(1,10)
    #    list1.append(m)
    #n=int(input())
    m=input().split()
    list1=[int(x) for x in m]
    #print(list1)
    cap=func(list1,n)
    print(cap)
