
for _ in range(int(input())):
    n=int(input())
    x={}
    y={}
    for i in range(0,4*n-1):
        a,b=input().split()
        a,b=int(a),int(b)
        if a not in x:
            x[a]=1
        else:
            x[a]-=1
        if b not in y:
            y[b]=1
        else:
            y[b]-=1
    for i in x:
        if x[i]&1:
            x1=i
            break
    for i in y:
        if y[i]&1:
            y1=i
            break
    print(x1,y1)
