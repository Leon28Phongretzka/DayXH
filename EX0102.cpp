#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto x:n)
#define Len 100005
const int MOD = 1000000007;
void solve()
{
    string s1; cin >> s1;
    string s2; cin >> s2;
    string s3; cin >> s3;
    //int n=s3.size();
    if(s3[1]=='?')
    {
        if(s3[2]=='?'||(s3[2]<='3'&&s3[2]>='0'))
        {
            s3[1]='2';
        }
        else if(s3[2]>='4'&&s3[2]<='9')
        {
            s3[1]='1';
        }
    }
    else
    {
        if(s3[1]=='2'&&s3[2]=='?')
        {
            s3[2]='3';
        }
        else if((s3[1]=='1'||s3[1]=='0')&&s3[2]=='?')
        {
            s3[2]='9';
        }
    }
    if(s3[2]=='?') s3[2]='3';
    if(s3[4]=='?') s3[4]='5';
    if(s3[5]=='?') s3[5]='9';
    cout << s3 << endl;
}
int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--) solve();
}