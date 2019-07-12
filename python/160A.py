n = int(input())
coins = input().split()
coins = list(map(int,coins))
coins.sort(reverse=True)
sum = sum(coins)
m_sum = 0
c = 0
for i in range(n):
    if m_sum <= sum - m_sum :
        m_sum +=coins[i]
        c+=1
    else:
        break
print(c)