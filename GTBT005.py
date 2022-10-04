# calculate sin taylor series by using for loop in python
from math import*
t=int(input())
for i in range(t):
    x=float(input())
    for k in range(0,10,1):
        y=((-1)**k)*(x**(1+2*k))/factorial(1+2*k)
    print(y)