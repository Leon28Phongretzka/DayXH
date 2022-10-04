from itertools import permutations
import sys
t=int(input())
for i in range(t):
    n = int(input())
    l = permutations(range(1, n))
    print(l)
