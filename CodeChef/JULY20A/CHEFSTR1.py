
for _ in range(int(input())):
    n=int(input())
    m=input().split()
    a=[int(x)for x in m]
    ans=0
    for i in range(1,n):
        ans+=abs(a[i]-a[i-1])-1
    print(ans)
