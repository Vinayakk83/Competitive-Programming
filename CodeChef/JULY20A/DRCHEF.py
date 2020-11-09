
for _ in range(int(input())):
    n,x=input().split()
    n,x=int(n),int(x)
    m=input().split()
    a=[int(i)for i in m]
    a.sort()
    count=0
    i=0
    while(i<n):
        if a[i]>=((x+1)>>1):
            if(x<a[i]):
                x=x<<1
            else:
                x=a[i]<<1
                i+=1
        else:
            i+=1
        count+=1
    print(count)
