import string
line = input()
sum = 0
d = dict.fromkeys(string.ascii_lowercase, 0)
for l in line :
    if l.isalpha():
        d[l]+=1
for m in string.ascii_lowercase:
    if d[m]>0:
        sum +=1
print(sum)