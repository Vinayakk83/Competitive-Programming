for _ in range(int(input())):
    pc, pr = map(int, input().split())
    c, r = pc, pr
    if c % 9 != 0:
        c = c - (c % 9)
    else:
        c -= 9
    if r % 9 != 0:
        r = r - (r % 9)
    else:
        r -= 9
    if c < r:
        print(0, (pc + 8) // 9)
    else:
        print(1, (pr + 8) // 9)
