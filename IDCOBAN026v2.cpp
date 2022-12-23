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
#define forn(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a; i >= b; i--)
#define fora(i, n) for(auto i:n)
#define Len 100005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
int n, mask, al;
vvi adj(20, vi(20, INT_MAX));
int dfs(int src, int mask, vvi &adj)
{
    if (mask == 0) return adj[src][1];
    int ans = INT_MAX;
    forn(i,1,n+1)
    {
        if (i == src) continue;
        if (mask & (1 << (i-1)))
        {
            int new_mask = mask ^ (1 << (i-1));
            ans = min(ans, adj[src][i] + dfs(i, new_mask, adj));
        }
    }
    return ans;
}
int s_cost(vvi &adj)
{
    int ans = INT_MAX;
    mask = (1 << n) - 1;
    forn(i,2,n+1)
    {
        ans = min(ans, adj[1][i] + dfs(i, mask ^ (1 << (i-1)), adj));
    }
    return ans;
}

void solve() 
{
    int m; cin >> n >> m;
    int ans = INT_MAX;
    forn(i,0,n+1) forn(j,0,n+1) adj[i][j] = 0;
    forn(i,0,m)
    {
        int u,v,cost; cin >> u >> v >> cost;
        adj[u][v] = cost;
    }
    forn(i,1,n+1)
    {
        forn(j,1,n+1) cout << adj[i][j] << " ";
        cout << endl;
    }
    cout << s_cost(adj);
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    // ll tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}