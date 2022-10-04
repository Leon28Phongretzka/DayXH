#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define f_sc(a) scanf("%f",&a)
#define i_sc(a) scanf("%d",&a)
#define ll_sc(a) scanf("%llu",&a)
#define c_sc(a) scanf(" %c",&a)
#define s_sc(a) scanf("%s",a)
#define f_pr(a) printf("%f",a)
#define i_pr(a) printf("%d",a)
#define ll_pr(a) printf("%lld ",a)
#define s_pr(a) printf("%s ",a)
#define c_pr(a) printf("%c",a)
#define MaxCompare(a, b) (((a) > (b)) ? (a) : (b))
#define MinCompare(a, b) (((a) > (b)) ? (b) : (a))
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define MAX1 281202
#define Kay 500
#define RN 500005
int a[2000002];
int main()
{
    int t,n,carry,l;
    i_sc(t);
    while(t--)
    {
        i_sc(n);
        carry=0;
        l=n<<1;
        for(int i=1; i^l; ++i)
        {
            if(i<=n) carry+=i;
            else carry+=(l-i);
            a[i]=carry%10;
            carry/=10;
        }
        if(carry) i_pr(carry);
        for(int i=l-1; i>0; i--) i_pr(a[i]);
        printf("\n");
    }
}