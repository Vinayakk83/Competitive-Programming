
for _ in range(int(input())):
    k=int(input())
    cb=[['.' for i in range(8)] for j in range(8)]
    cb[0][0]='O'
    n=k//8
    if n<8:
        k=k%8
        for i in range(n,n+1):
            for j in range(k,8):
                cb[i][j]='X'
            if i<7:
                for j in range(0,k+1):
                    cb[i+1][j]='X'
    for i in range(0,8):
        for j in range(0,8):
            print(cb[i][j],end="")
        print()
