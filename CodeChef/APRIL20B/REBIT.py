def evaluate(tokens):  
    values = []  
    ops = [] 
    i = 0
    while i<len(tokens): 
        if tokens[i]=='(' or tokens[i]=='^' or tokens[i]=='|' or tokens[i]=='&': 
            ops.append(tokens[i])
            #print(tokens[i])
        elif tokens[i]=='#':
            values.append([1,1,1,1]) 
        elif tokens[i]==')':
            x2 = values.pop()
            x1 = values.pop() 
            #print(x2,x1)
            opr= ops.pop()
            f=[0,0,0,0]  
            if opr=='^':
                f[0]=x1[0]*x2[0]+x1[1]*x2[1]+x1[2]*x2[2]+x1[3]*x2[3]
                f[1]=x1[0]*x2[1]+x1[1]*x2[0]+x1[2]*x2[3]+x1[3]*x2[2]
                f[2]=x1[0]*x2[2]+x1[1]*x2[3]+x1[2]*x2[0]+x1[3]*x2[1]
                f[3]=x1[0]*x2[3]+x1[1]*x2[2]+x1[2]*x2[1]+x1[3]*x2[0]
            elif opr=='&':
                f[0]=x1[0]*x2[0]+x1[0]*x2[1]+x1[0]*x2[2]+x1[0]*x2[3]+x1[1]*x2[0]+x1[2]*x2[0]+x1[3]*x2[0]+x1[2]*x2[3]+x1[3]*x2[2]
                f[1]=x1[1]*x2[1]
                f[2]=x1[1]*x2[2]+x1[2]*x2[1]+x1[2]*x2[2]
                f[3]=x1[1]*x2[3]+x1[3]*x2[1]+x1[3]*x2[3]
            elif opr=='|':
                f[0]=x1[0]*x2[0]
                f[1]=x1[0]*x2[1]+x1[1]*x2[0]+x1[1]*x2[1]+x1[1]*x2[2]+x1[1]*x2[3]+x1[2]*x2[1]+x1[2]*x2[3]+x1[3]*x2[1]+x1[3]*x2[2]
                f[2]=x1[0]*x2[2]+x1[2]*x2[0]+x1[2]*x2[2]
                f[3]=x1[0]*x2[3]+x1[3]*x2[0]+x1[3]*x2[3]
            values.append(f)
            ops.pop()
            
        i += 1
    #print(values)
    return values[-1]
t=int(input())
mod=998244353
for _ in range(t):
    l=input()
    list1=evaluate(l)
    z=sum(list1)
    '''for i in list1:
        print(i,end=" ")
    print()'''
    y=pow(z,mod-2,mod)
    for i in list1:
        print(i*y%mod,end=" ")
    print()
