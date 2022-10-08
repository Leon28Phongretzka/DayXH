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
#define MOD 29
ll powmod(ll a, ll b)
{
    if(b==1) return a%29;
    ll x=powmod(a,b/2);
    x=x*x%29;
    if(b&1) return x*a%29;
    return x;
}
ll cnt[2004];
void solve()
{
    ll power;
    while(cin >> power)
    {
        if(power==0) break;
        int x=2004;
        memset(cnt,0,sizeof(cnt));
        for(int i=2; i<=x; i++)
        {
            while(x%i==0)
            {
                cnt[i]+=power;
                x/=i;
            }
        }
        int ans=1;
        for(int i=2; i<2004; i++)
        {
            if(cnt[i]) ans=ans*(powmod(i,cnt[i]+1)+28)*powmod(i-1,27)%29;
        }
        cout << ans << endl;
    }
}

int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; while(tt--) solve();
    // solve();
}