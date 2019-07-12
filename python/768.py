n = int(input())
s = input().split()
s = list(map(int,s))
ma=max(s)
mi=min(s)
p = len(s)
for t in s:
    if (t == ma) or (t == mi):
        p-=1
print(p)