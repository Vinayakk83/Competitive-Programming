
for _ in range(int(input())):
    A={}
    B={}
    n=int(input())
    x=input().split()
    y=input().split()
    a=[int(i)for i in x]
    b=[int(i)for i in y]
    a.sort()
    b.sort()
    l,r=0,0
    while(l<n and r<n):
        if a[l]<b[r]:
            if a[l] not in A:
                A[a[l]]=1
                B[a[l]]=0
            else:
                A[a[l]]+=1
            l+=1
        elif a[l]>b[r]:
            if b[r] not in B:
                A[b[r]]=0
                B[b[r]]=1
            else:
                B[b[r]]+=1
            r+=1
        else:
            l+=1
            r+=1
    while(l<n):
        if a[l] not in A:
            A[a[l]]=1
            B[a[l]]=0
        else:
            A[a[l]]+=1
        l+=1
    while(r<n):
        if b[r] not in B:
            A[b[r]]=0
            B[b[r]]=1
        else:
            B[b[r]]+=1
        r+=1
    flag=False
    ans,count=0,0
    for i in sorted(A):
        if (A[i]|B[i])&1:
            flag=True
            break
        else:
            count+=(A[i]>>1)
    if flag==True:
        print(-1)
    else:
        for i in sorted(A):
            A[i]=A[i]>>1
            B[i]=B[i]>>1
        ans=0
        pre=0
        c=count
        if(min(a[0],b[0]) not in A):
            pre=min(a[0],b[0])*2
            for i in sorted(A):
                if count==0:
                    break
                if pre<=i:
                    ans+=min(a[0],b[0])*2*count
                    count=0
                else:
                    ans+=i*(A[i]|B[i])
                    count-=(A[i]|B[i])
        else:
            for i in sorted(A):
                ans+=i*((A[i]|B[i]))
                count-=(A[i]|B[i])
                pre=i*2
                break
            if count>0:
                k=True
                for i in sorted(A):
                    if count==0:
                        break
                    if k:
                        k=False
                        continue
                    if pre<=i:
                        ans+=(pre>>1)*2*count
                        count=0
                    else:
                        ans+=i*(A[i]|B[i])
                        count-=(A[i]|B[i])
        # print(ans)
    # print(a,b)
    # print(A)
    # print(B)
    # print()
        ans2=0
        for i in sorted(A):
            if c==0:
                break
            num=A[i]|B[i]
            if num>c:
                num=c
                # print(num)
            ans2+=int(i)*num
            c-=num
        print(min(ans,ans2))
        # print(ans)
        # print(ans,ans2)
        # print(A)
    #     print(B)
    # print(a,b)
    # print()
