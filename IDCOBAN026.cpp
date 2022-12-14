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
#define forn(i, n) for (int i = 1; i < int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 1000005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
ll tt;
ll n , m , ans = INT_MAX  ,cmin = INT_MAX;
ll c[500][500], check[50], luu[50] ,truoc[500];
void TSP(ll k)
{
    for(int i=2; i<=n; ++i)
    {
        if(check[i]==0 && c[truoc[k-1]][i]!=0 )
        {
            check[i] = 1;
            luu[k] = luu[k-1] + c[truoc[k-1]][i];
            truoc[k] = i ;
            if(k==(n-1))
            {
               if(c[i][1]) ans = min(ans,luu[k]+c[i][1]);
            }
           else if(luu[k] + cmin*(n-k) < ans ) TSP(k+1);
           check[i] = 0 ;
        }
    }

}
void solve() 
{
    ll k,j,c0;
    truoc[0] = 1;
    cin >> n >> m ;
    for(int i=1; i<=m; ++i)
    {
        cin >> k >> j >> c0 ;
        c[k][j] = c0 ;
        cmin = min(cmin , c0);
    }
    TSP(1);
    cout << ans << endl;
    

}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    // cin >> tt; while(tt--) {solve();}
    solve();
}