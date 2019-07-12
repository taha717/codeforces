n,p =input().split()
n,p = int(n),int(p)
k = 0
for i in range(0,n):
    o,d = input().split()
    d = int(d)
    if o == '+':
        p+=d
    else :
        if d > p :
            k+=1
        else :
            p-=d
print(p,k)