flag=0
t=int(input())
for _ in range(0, t):
    n=int(input())
    a=int(input())
    s=2*pow(10,n)+a
    print(s, flush=True)
    b=int(input())
    c=s-a-b-pow(10,n)
    print(c, flush=True)
    d=int(input())
    e = s - a - b - c - d
    print(e, flush=True)
    m=int(input())
    if m == -1:
        break