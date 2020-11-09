import math
t=int(input())
for _ in range(t):
    x=input().split()
    list1=[int(i) for i in x]
    a=list1[0]
    b=list1[1]
    l=list1[2]
    r=list1[3]
    if r==0:
        print(0)
    else:
        list2=[]
        flag=False
        x=math.floor(math.log2(r))
        for i in range(x,-1,-1):
            x0=1<<i
            r1=(r&x0)>>i
            if r1==1:
                l1=(l&x0)>>i
                if r1==l1 and flag==False:
                    continue
                else:
                    flag=True
                    ans=((r&(~x0))|(x0-1))
                    list2.append(ans)
        list2.extend([l,r])
        list2.sort()
        ans=l
        for i in list2:
            if ((a&i)*(b&i))>((a&ans)*(b&ans)):
                ans=i
        if ans==0:
            print(0)
        else:
            x=math.floor(math.log2(ans))
            for i in range(x,-1,-1):
                x0=1<<i
                ans0=(ans&x0)>>i
                if ans0==1:
                    a0=(a&x0)>>i
                    b0=(b&x0)>>i
                    if a0==0 and b0==0:
                        ans1=ans&(~x0)
                        if ans1>=l:
                            ans=ans1
                        else:
                            continue
            print(ans)
