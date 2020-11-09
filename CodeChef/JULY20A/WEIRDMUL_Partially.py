
def power(x,y,mod):
    if(y==0):return 1
    temp=power(x,int(y/2),mod)  
    if(y%2==0):
        return (temp*temp)%mod 
    else: 
        if(y>0):return (x*temp*temp)%mod 
        else: return ((temp*temp)/x)%mod

mod=998244353
for _ in range(int(input())):
    n,x=input().split()
    n,x=int(n),int(x)
    m=input().split()
    a=[int(i)for i in m]
    flag=True
    for i in a:
        if i==0:
            flag=False
            print(0)
            break
    if flag:
        flag1=True
        for i in range(1,n):
            if a[i]!=a[i-1]:
                flag1=False
                break
        X=[1]*n
        for i in range(1,n):
            X[i]=(X[i-1]*x)%mod
        X.reverse()
        # print(a)
        # print(X)
        if flag1==False:
            p=1
            for i in range(0,n):
                list=[0]*(n-i)
                list[0]=(a[i]*X[n-1])%mod
                for j in range(1,n-i):
                    list[j]=(list[j-1]+(a[j+i]*X[n-j-1])%mod)%mod
                # print(list)
                for j in list:
                    p=(p*j)%mod
            print((p*p)%mod)
        else:
            for i in range(n-2,-1,-1):
                X[i]=(X[i]+X[i+1])%mod
            
            # print(X)
            
            s=a[0]
            for i in range(n-1,-1,-1):
                X[i]=(X[i]*s)%mod
            sub=[0]*n
            for i in range(0,n):
                z=power(X[i],(i+1),mod)
                sub[i]=z
            p=1
            for i in sub:
                p=(p*i)%mod
            
            print(p*p%mod)
    # print()
