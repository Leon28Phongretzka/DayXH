#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<bool, ll> pbl;
typedef pair<ul, int> pui;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<int> vi;
typedef vector<int>::iterator ip;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pbl> vpbl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vpdd;
typedef vector<string> vs;
typedef vector<pui> vpui;
typedef vector<ul> vu;
typedef vector<string> vs;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
using namespace std;
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
    string ans = "1";
    ll b; cin >> b;
    if(b==0)
    {
        cout << 1 << endl;
        return;
    }
    for(ll i=1; i<=b; i++)
    {
        ans=mult(ans, to_string(i));
    }
    cout << ans << endl;
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; for (auto i = 1; i <= tt; i++) {solve();}
    // solve();
}