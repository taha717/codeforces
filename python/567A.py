n = int(input())
x = input().split()
x = list(map(int,x))
for i in range(n):
    if i == 0:
        mi = abs(x[i + 1] - x[i])
    elif i == n-1 :
        mi = abs(x[i]-x[i-1])
    else :
        mi1 = abs(x[i + 1] - x[i])
        mi2 = abs(x[i - 1] - x[i])
        mi = min(mi1, mi2)
    ma1 = abs(x[i]-x[0])
    ma2 = abs(x[n-1]-x[i])
    ma = max(ma1,ma2)
    print(mi,ma)


