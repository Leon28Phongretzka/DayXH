# implement n
t = int(input())
for i in range(1,t+1):
    a, b = map(int, input().split())
    # a^b mod 10^9+7
    print(pow(a,b,10**9+7))

