#password generator

import string
import random
n,k = input().split()
n = int(n)
k = int(k)
s = string.ascii_lowercase
p = random.sample(s,k)
pas = ''
d = 0
for i in range(k):
    pas +=p[i]
while n :
    if n>k:
        print(pas,end='')
        n -= k
    elif n == k:
        print(pas,end='')
        n=0
    else :
        for i in range(n):
            print(pas[i],end='')
        n=0

