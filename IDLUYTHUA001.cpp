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
#define forn(i, n) for (int i = 1; i <= ll(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
#define MOD 1000000007
const ll N = 1e9+7;
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
// string power(string a, ll b)
// {
//     ll ans = 1;
//     while (b)
//     {
//         if (b & 1)
//             ans = (ans * a) % MOD;
//         a = (a * a) % MOD;
//         b >>= 1;
//     }
//     return ans;
// }
void solve()
{
    string a; int b;
    cin >> a >> b;
    string res = "1";
    for (int i = 0; i < b; i++)
    {
        res = mult(res, a);
    }
    cout << res << endl;
}

int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; while(tt--) solve();
    // solve();
}