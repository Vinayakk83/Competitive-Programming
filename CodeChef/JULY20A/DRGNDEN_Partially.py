
n,q=input().split()
n,q=int(n),int(q)
m1=input().split()
m2=input().split()
h=[int(x)for x in m1]
a=[int(x)for x in m2]
for _ in range(0,q):
    m=input().split()
    l,r=int(m[1]),int(m[2])
    if m[0]=='1':
        a[l-1]=r
    else:
        if l==r:
            print(a[l-1])
        else:
            new={}
            if l<r:
                for i in range(l,r):
                    new[h[i]]=i
            else:
                for i in range(l-2,r-2,-1):
                    new[h[i]]=i
            sub=list(new.items())
            sub.sort(reverse=True)
            x=h[l-1]
            # print(sub)
            if sub[0][0]>=x:
                print("-1")
            else:
                ans=a[l-1]
                if l<r:
                    for i in sub:
                        if l<=i[1]:
                            l=i[1]
                            ans+=a[l]
                        if l==r-1:
                            break
                else:
                    for i in sub:
                        if l>=i[1]:
                            l=i[1]
                            ans+=a[l]
                        if l==r-1:
                            break
                print(ans)
