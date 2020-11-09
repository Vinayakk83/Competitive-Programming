#import random
t = int(input())
list1 = list()
#t = random.randint(1,10)
for i in range(0,t):
    #s=random.randint(2,8)
    #w1=random.randint(1,2)
    #w2=random.randint(1,2)
    #w3=random.randint(1,2)
    n = input().split()
    s = int(n[0])
    w1 = int(n[1])
    w2 = int(n[2])
    w3 = int(n[3])
    list1.append([s, w1, w2, w3])
for i in list1:
    list2 = [i[1],i[2],i[3]]
    if i[3] < i[1]:
        list2.reverse()
    list3 = []
    list3.append(list2[0])
    list3.append(list2[0] + list2[1])
    list3.append(list2[0] + list2[1] + list2[2])
    count = 1
    list3.sort(reverse=True)
    #print(i[0], i[1], i[2], i[3],list3)
    for j in list3:
        if i[0]>=j:
            break
        count +=1
    print(count)