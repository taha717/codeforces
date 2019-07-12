n = int(input())
a = input().split()
a = list(map(int,a))
b = a.copy()
b.sort(reverse=True)
for i in range(n):

