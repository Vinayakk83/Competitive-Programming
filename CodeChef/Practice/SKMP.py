# 1. SKMP

for _ in range(int(input())):
    s = input()
    p = input()
    freq = {}
    for i in s:
        if i not in freq:
            freq[i] = 1
        else:
            freq[i] += 1
    for i in p:
        freq[i] -= 1
    ans = ""
    for i in sorted(freq):
        if i < p[0]:
            ans += i*freq[i]
            freq[i] = 0
        else:
            break
    i = 1
    while(freq[p[0]] > 0 and i < len(p) and p[i] >= p[0]):
        if p[i] == p[0]:
            i += 1
            continue
        ans += p[0]
        freq[p[0]] -=1
    ans += p
    for i in sorted(freq):
        ans += i*freq[i]
    print(ans)