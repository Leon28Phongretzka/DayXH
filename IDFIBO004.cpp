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
#define forn(i, n) for (int i = 0; i <= int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
const double pi=3.14159265358979323846;
const int Mod = 1000000007;
int tt;
ll f[94];
vl a;
ll power(ll a, ll n)
{
    ll ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (ans * a) % Mod;
        a = (a * a) % Mod;
        n >>= 1;
    }
    return ans;
}
void Fibo()
{
    f[0]=0;
    f[1]=1;
    for(int i=2;i<94;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    for(int i=0; i<94; i++) a.pb(f[i]);
    // forn(i,94) cout<<f[i]<<" "; 
}
void solve() 
{
    cin >> tt;
    while(tt--)
    {
        ll n; cin >> n;
        if(binary_search(a.begin(),a.end(),n)) cout << 0 << " " << n << endl;
        else
        {
            ll x = upper_bound(a.begin(),a.end(),n)-a.begin();
            ll y = a[x-1];
            // cout << n-y << " " << y << endl;
            if(binary_search(a.begin(),a.end(),n-y)) cout << n-y << " " << y << endl;
            else cout << -1 << endl;
        }
    }
}
int main() 
{
    FAST_IO;
    Fibo();
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    // cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}