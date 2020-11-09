
for _ in range(int(input())):
    n = int(input())
    ans = 0
    flag = False
    print("1 " + str(1 << 20), flush = True)
    sum = int(input())
    sum -= n * (1 << 20)
    if sum & 1:
        ans += 1
    for i in range(1, 20):
        j = 1 << i
        print("1 " + str(j), flush = True)
        currSum = int(input())
        if currSum == -1:
            flag = True
            break
        if ((sum + n * j - currSum) // (2 * j)) & 1:
            ans += j
    if flag:
        break
    print("2 " + str(ans), flush = True)
    c = int(input())
    if c == -1:
        break


