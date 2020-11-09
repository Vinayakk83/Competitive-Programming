import sys,os
if(os.path.exists('input.txt')):
    sys.stdin = open("input.txt","r")
    sys.stdout = open("output.txt","w")

mod = 1000000007

N = 1000001

NfactInverse = [0] * (N + 1)
NInverse = [0] * (N + 1) 
Nfact = [0] * (N + 1)

def InverseOfNumber(): 
    NInverse[0] = 1
    NInverse[1] = 1
    for i in range(2, N + 1, 1): 
        NInverse[i] = (NInverse[mod % i] * (mod - (mod // i) % mod))

def InverseOfFactorial(): 
    NfactInverse[0] = 1
    NfactInverse[1] = 1
    for i in range(2, N + 1, 1): 
        NfactInverse[i] = (NInverse[i] * NfactInverse[i - 1]) % mod 
    
def Nfactorial(): 
    Nfact[0] = 1
    for i in range(1, N + 1): 
        Nfact[i] = (Nfact[i - 1] * i) % mod 

def Binomial(n, r):
    ans = ((Nfact[n] * NfactInverse[r]) % mod * NfactInverse[n - r])% mod 
    return ans 

def power(x, y):  
    res = 1
    x = x % mod
    if x == 0:
        return 0
    while y > 0:
        if y & 1:
            res = (res * x) % mod
        y = y >> 1
        x = (x * x) % mod
    return res

InverseOfNumber() 
InverseOfFactorial() 
Nfactorial()

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    freq = {}
    for i in arr:
        if i not in freq:
            freq[i] = 1
        else:
            freq[i] += 1
    maxNum = max(arr)
    ans = 0
    x =  power(2, n - freq[maxNum] + 1)
    for i in range(freq[maxNum], freq[maxNum] // 2, -1):
        y = Binomial(freq[maxNum], i)
        ans = (ans + (x * y) % mod) % mod
    print(int(ans))
    