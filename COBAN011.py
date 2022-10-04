# implement n
t = int(input())
for i in range(1,t+1):
    a, b = map(int, input().split())
    # a divide and mod b
    print(a//b,a%b)
