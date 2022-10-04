#include <iostream>
#include <math.h>
using namespace std;

const int m=19;

int factorial(int n) 
{
    if (n==0){ return 1;}
    return n*factorial(n-1);
}

int main() 
{
    float x;
    cin >> x;
    long long sum=0;
    int k=1;
    for (int i=1;i<=m;i+=2) 
    {
        sum+=(k*(powf(x,i)/factorial(i)));
        k=k*(-1);
    }
    cout<<sum<<endl;
    return 0;
}