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
#define Len 1000005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
ll tt;
ll a[200][200], dp[200][200];
void solve() 
{
    ll n,m,ans=INT_MAX;
    ll x,y; 

    cin >> m >> n;
	    for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}	
		} 
		
	cin >> x >> y;
	for(int i = 1; i <= n; i++)
		{
			dp[0][i] = INT_MAX, dp[m+1][i] = INT_MAX;
		}
	    for(int i = 1; i <= m; i++)
		{ 
			if(i != x) 
			{
				a[i][y] = INT_MAX;
			}
		}
	    for(int i = 1; i <= m; i++)
		{	 
			dp[i][y] = a[i][y];
		}
	    for(int j = y + 1; j <= n; j++)
		{
	      	for(int i = 1; i <= m; i++)
			{	
	        	dp[i][j] = min(min(dp[i-1][j-1], dp[i][j-1]), dp[i+1][j-1]) + a[i][j];
	      	}	
	    }
	    for(int i = 1; i <= m; i++)
		{	 
			ans = min(ans,dp[i][n]);
		}
	    cout << ans << endl;


}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    cin >> tt; while(tt--) {solve();}
    // solve();
}