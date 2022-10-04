for t in range(int(input())):
    x,y,m=map(int,input().split())
    ans=int(m/x);
    a=ans;
    while(a>=y):
        x=int(a/y)
        ans+=x
        a=a%y+x
    print(ans)