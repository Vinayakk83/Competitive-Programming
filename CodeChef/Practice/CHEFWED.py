# 2. CHEFWED

for _ in range(int(input())):
    n, k = map(int,input().split())
    arr = list(map(int,input().split()))
    dp = [0] * (n + 1) 
    mp = {}
    dp[0] = 0
    for i in range(1, n + 1):
        mp.clear()
        count = 0
        dp[i] = dp[i-1] + k
        mp[arr[i-1]] = 1
        for j in range(i-1, 0, -1):
            if arr[j-1] not in mp:
                mp[arr[j-1]] = 1
            else:
                if mp[arr[j-1]] == 1:
                    count += 1
                mp[arr[j-1]] += 1
                count += 1
            dp[i] = min(dp[i], dp[j-1] + k + count)
    print(dp[n])