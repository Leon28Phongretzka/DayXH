
from math import factorial


def C(n, k):
    return factorial(n) // (factorial(k) * factorial(n - k))
for t in range(int(input())):
    a, b, c = map(int, input().split())
    print(C(a, b) % c)