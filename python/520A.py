n = input()
word = input()
word = word.lower()
alpha = "abcdefghijklmnopqrstuvwxyz"
flag = True
for a in alpha:
    if a not in word:
        flag =False
        break
if flag :
    print('YES')
else:
    print('NO')

