w1 = input()
w2 = input()
n1,n2 = len(w1),len(w2)
if n1 == n2:
    if w1 == w2 :
        print(-1)
    else:
        print(n1)
elif n1 > n2 :
    print(n1)
else:
    print(n2)