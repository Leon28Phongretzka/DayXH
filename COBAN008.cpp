#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
#define Len 100005
const int MOD = 1000000007;
string add(string a, string b)
{
    string res="";
    int n=a.size();
    int m=b.size();
    int i=n-1, j=m-1;
    int carry=0;
    for(int i=n-1, j=m-1; i>=0 || j>=0; i--, j--)
    {
        int m=(i>=0)?a[i]-'0':0;
        int n=(j>=0)?b[j]-'0':0;
        int sum=m+n+carry;
        if (sum >= 10)
        {
            sum = sum % 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        res = string(1, sum + '0') + res;
    }
    if (carry == 1)
    {
        res = string(1, '1') + res;
    }
    return res;
}
string mult(string a, string b)
{
    string res="";
    int n=a.size();
    int m=b.size();
    //create res is the answer
    res.assign(n+m,'0');
    for(int i=n-1; i>=0;i--)
    {
            for(int j=m-1; j>=0; j--)
            {
                int mul=(a[i]-'0')*(b[j]-'0');
                int p1=i+j, p2=i+j+1;
                int sum=mul+res[p2]-'0';
                res[p2]=sum%10+'0';
                res[p1]+=sum/10;
            }
    }
    while (res[0] == '0' && res.length() > 1)
    {
            res.erase(0, 1);
    }
    return res;
}
void solve() 
{
    //freopen("bignumber.in", "r", stdin); freopen("bignumber.out", "w", stdout);
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        vector<string> v;
        while(ss>>s)
        {
            v.push_back(s);
        }
        //cout << v[1] << endl;
        //if(v[1]=="+") 
        cout << add(v[0],v[1]);
        //else cout << mult(v[0],v[1]);
        cout << endl;
    }
}
int main() 
{
    FAST_IO;
    //freopen("bignumber.in", "r", stdin); freopen("bignumber.out", "w", stdout);
    //int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}