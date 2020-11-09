t=int(input())
list1=list()
for i in range(0,t):
	n=input()
	list1.append(n)
for i in range(0,t):
    str1=""
    z=list1[i][0]
    count=1
    for j in range(1,len(list1[i])):
        if z!=list1[i][j]:
            str1+=list1[i][j-1]+str(count)
            count=1
            z=list1[i][j]
        else:
            count+=1
            z=list1[i][j]
    if len(list1[i])>1:
        str1+=list1[i][j]+str(count)
    else:
        str1+=z+str(count)
    if len(str1)<len(list1[i]):
        print("YES")
    else:
        print("NO")