s = input().split('+')
s = list(map(int,s))
s.sort()
for i in range(len(s)) :
    if i < (len(s)-1):
        print(s[i],end='+')
    else:
        print(s[i])
