n = int(input())
child = input().split()
p_skill,m_skill,s_skill = list(),list(),list()
p,m,s=0,0,0
for i in range(len(child)):
    if child[i]=='1':
        p_skill.append(i+1)
        p+=1
    elif child[i]=='2':
        m_skill.append(i+1)
        m+=1
    else :
        s_skill.append(i+1)
        s+=1
w = min(p,m,s)
if w==0:
    print(w)
else:
    print(w)
    for i in range(w):
        print("%d %d %d"%(p_skill[i],m_skill[i],s_skill[i]))


