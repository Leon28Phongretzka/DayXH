import random
rand_list=[0, 1, 4, 9]
def crz():
    for i in range(4):
        rand_list.append(random.randint(0, 9))
    return rand_list
t=int(input())
for i in range(t):
    n=int(input())
    if n==1:
        print(1)
    elif(n&1):
        # string s=string s(n-1, '0');
        s='0'*(n-1)
        s="1"+s;
        print(s)
    
