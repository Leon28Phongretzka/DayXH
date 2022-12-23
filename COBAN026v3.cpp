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
#define forn(i,a,b) for (int i = (int)a; i < int(b); i++)
#define forr(i,a,b) for (int i = (int)a; i >= int(b); i--)
#define fora(i, n) for(auto i:n)
#define Len 100005
const int MOD = 1000000007;
ll n,m;
ll dist[20][20];
ll dp[20][1<<20];
ll ans = INT_MAX;

void Travel_Salesman(int u, int mask)
{
    // use DP
    if(mask == (1<<n)-1)
    {
        ans = min(ans, dist[u][0]);
        return;
    }
    if(dp[u][mask] != -1) return;
    for(int v=0; v<n; ++v)
    {
        if((mask & (1<<v)) == 0)
        {
            Travel_Salesman(v, mask | (1<<v));
            dp[u][mask] = min(dp[u][mask], dist[u][v] + dp[v][mask | (1<<v)]);
        }
    }
}
void solve()
{
    cin >> n >> m;
    for(int i=0; i<m; ++i)
    {
        ll u,v,w; cin >> u >> v >> w;
        dist[u][v] = w;
    }
    memset(dp, -1, sizeof(dp));
    Travel_Salesman(0, 1);
    cout << ans << endl;
    
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}