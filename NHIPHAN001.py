def bintodec(n):
    # convert from bin to dec
    return int(n, 2)
# implement n
t = int(input())
for i in range(1,t+1):
    # implement n, string a and string b
    n, a, b = input().split()
    # convert a and b to dec
    print(abs(bintodec(a) - bintodec(b))-1)    


