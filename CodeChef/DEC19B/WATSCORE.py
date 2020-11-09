t=int(input())
dict={}
list=[]
for i in range(0,t):
	x=int(input())
	for j in range(0,x):
		m,n=input().split()
		m=int(m)
		n=int(n)
		if m not in dict:
			dict[m]=n
			list.append(m)
		else:
			if dict[m]<n:
				dict[m]=n
	sum=0
	for j in list:
		if j<9:
			sum+=dict[j]
	print(sum)
	list.clear()
	dict.clear()