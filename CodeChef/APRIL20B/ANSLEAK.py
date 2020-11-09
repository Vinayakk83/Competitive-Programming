t=int(input())
for _ in range(t):
    x=input().split()
    n,m,k=int(x[0]),int(x[1]),int(x[2])
    arr3=[]
    arr1=input().split()
    qwerty=[0]*k
    count = 0
    num = arr1[0]
    for i in range(1,m+1): 
        freq = arr1.count(i) 
        if(freq> count): 
            count = freq 
            num = i
    for i in range(0,k):
        if arr1[i]==num:
            qwerty[i]+=1
    arr3.append(num)
    for i in range(1,n):
        arr1=input().split()
        minimum=min(qwerty)
        arr2=[]
        for j in range(0,k):
            if qwerty[j]==minimum:
                if arr1[j] not in arr2:
                    arr2.append(arr1[j])
        count=0
        num = arr2[0]
        for p in arr2: 
            freq = arr1.count(p) 
            if(freq> count): 
                count=freq 
                num=p
        for j in range(0,k):
            if arr1[j]==num:
                qwerty[j]+=1
        arr3.append(num)
    for i in arr3:
        print(i,end=" ")
    print()