t=int(input())
for i in range(0,t):
    a=1
    num=int(input())
    while num!=0:
        a*=num
        num-=1
    print(a)
