import sys,os
if(os.path.exists('input.txt')):
    sys.stdin = open("input.txt","r")
    sys.stdout = open("output.txt","w")

k = int(input())
if k == 2:
    ab = [1, 3, 4, 2, 3, 1, 0, 0]
    pt = ['0', '10', '110', '1110', '10110', '010110', '0010110', '10010110']
for _ in range(int(input())):
    n = int(input())
    if k == 1:
        if((n * (n + 1) // 2) & 1):
            print(1)
            s = ""
            if(n & 1):
                s += '0'
                for i in range(1, (n + 1) // 2):
                    if(i & 1):
                        s += '0'
                    else:
                        s += '1'
                for i in range((n + 1) // 2, n):
                    if(i & 1):
                        s += '1'
                    else:
                        s += '0'
            else:
                for i in range(0, n // 2 + 1):
                    if(i & 1):
                        s += '1'
                    else:
                        s += '0'
                for i in range(n // 2 + 1, n):
                    if(i & 1):
                        s += '0'
                    else:
                        s += '1'
            print(s)
        else:
            print(0)
            s = ""
            if(n & 1):
                s += '0'
                for i in range(1, (n + 1) // 2 + 1):
                    if(i & 1):
                        s += '0'
                    else:
                        s += '1'
                for i in range((n + 1) // 2 + 1, n):
                    if(i & 1):
                        s += '1'
                    else:
                        s += '0'
            else:
                for i in range(0, n // 2):
                    if(i & 1):
                        s += '0'
                    else:
                        s += '1'
                for i in range(n // 2, n):
                    if(i & 1):
                        s += '1'
                    else:
                        s += '0'
            print(s)
    else:
        s = ""
        num = n % 8
        print(ab[num - 1])
        if num != 0:
            s += pt[num - 1]
        num = n // 8
        for i in range(num):
            s += pt[7]
        
        print(s)