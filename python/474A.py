d = input()
se = input()
s=''
keys ='qwertyuiopasdfghjkl;zxcvbnm,./'
if d == 'R':
    c = -1
else:
    c = 1
for i in range(len(se)):
    p = keys.find(se[i])
    s +=keys[p+c]
print(s)
