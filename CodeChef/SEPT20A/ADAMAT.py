
for _ in range(int(input())):
    n = int(input())
    arr = []
    for i in range(n):
        m = list(map(int, input().split()))
        arr.append(m)
    ans, curr = 0, n
    for i in range(n - 1, 0, -1):
        if arr[0][i] != curr:
            ans += 1
            curr = arr[0][i]
        if curr <= n: 
            curr -= 1
        else:
            curr = (i - 1) * n + 1
    print(ans)
