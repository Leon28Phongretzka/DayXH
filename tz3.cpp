#include<iostream>
using namespace std;
void exam(int *p, int i)
{
    int *q;
    q=&i;
    int **ptr=&p;
    **ptr=*p+*q;
}
int main()
{
    int i(20), p(22);
    int *r {&p};
    exam(r,p);
    cout << *r << " " << i << " " << p;
}