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
ll adj[505][505];
int memo[n + 1][1 << (n + 1)];

int fun(int i, int mask, int n)
{
    // base case
	// if only ith bit and 1st bit is set in our mask,
	// it implies we have visited all other nodes already
    // and we are back at the starting node
    if (mask == (1 << (n + 1)) - 1)
        return adj[i][0];
    // memoization
    if (memo[i][mask] != -1)
        return memo[i][mask];
    int ans = INT_MAX;
    // we have to travel all nodes j in mask and end the
	// path at ith node so for every node j in mask,
	// recursively calculate cost of travelling all nodes in
	// mask except i and then travel back from node j to
	// node i taking the shortest path take the minimum of
	// all possible j nodes
    for (int j = 0; j <= n; j++)
    {
        if ((mask & (1 << j)) == 0)
        {
            int newAns = adj[i][j] + fun(j, mask | (1 << j), n);
            ans = min(ans, newAns);
        }
    }
    return memo[i][mask] = ans;

}

void solve() 
{
    int n,m; cin >> n >> m;
    int ans = INT_MAX;
    forn(i,0,m)
    {
        ll u,v,cost; cin >> u >> v >> cost;
        adj[u][v] = cost;
    }
    memset(memo, -1, sizeof(memo));
    forn(i,0,n)
    {
        ans = min(ans, fun(i, (1<<(n+1))-1+adj[i][0]), n);
    }
    cout << ans << endl;
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    // ll tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}