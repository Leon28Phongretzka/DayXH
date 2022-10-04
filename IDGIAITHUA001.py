# implement n
t = int(input())
for i in range(1,t+1):
    n = int(input())
    fact = 1
    for i in range(1,n+1):
        fact = fact * i
    print (fact)