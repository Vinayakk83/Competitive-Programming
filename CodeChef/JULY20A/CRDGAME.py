
for _ in range(int(input())):
    c,m=0,0
    for i in range(int(input())):
        a,b=input().split()
        c1=[int(x)for x in a]
        m1=[int(x)for x in b]
        s1=sum(c1)
        s2=sum(m1)
        if s1>s2:
            c+=1
        elif s1<s2:
            m+=1
        else:
            c+=1
            m+=1
    if c>m:
        print(0,c)
    elif c<m:
        print(1,m)
    else:
        print(2,c)
