# implement n
t = int(input())
for i in range(1,t+1):
    n,k = map(int, input().split())
    fact_n=fact_k=fact_n_k=1;
    for i in range(n-k+1,n+1):
        fact_n = fact_n * i
    print(fact_n)

    

