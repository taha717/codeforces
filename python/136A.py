n = int(input())
a= input().split()
p=[]
for i in range(1,(n+1)):
    d = a.index(str(i))
    d +=1
    p.append(str(d))

print(" ".join(p))