n, q = input().split()
n = int(n)
q = int(q)
x = input().split()
list1 = [int(i) for i in x]
list2 = []
for _ in range(0,q):
    a, b = input().split()
    a = int(a)
    b = int(b)
    list2.append([a, b])
for i in list2:
    if i[1]-i[0]>1:
        if list1[i[0]-1]<list1[i[0]]:
            if list1[i[1]-2]<list1[i[1]-1]:
                print("NO")
            else:
                print("YES")
        else:
            if list1[i[1] - 2] < list1[i[1] - 1]:
                print("YES")
            else:
                print("NO")
    else:
        print("NO")