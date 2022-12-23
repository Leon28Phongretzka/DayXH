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
void solve() 
{
    ll n; cin >> n;
    vl v;
    ll v1[n+3][n+3]={0};
    forn(i,0,n) {ll x; cin >> x; v.pb(x);}
    // fora(i,v) cout << i << " ";
    forn(i,0,n)
    {
        v1[0][i]=v[i];
    }
    forn(i,1,n)
    {
        forn(j,0,n-1)
        {
            v1[i][j]=v1[i-1][j]+v1[i-1][j+1];
        }
    }
    forr(i,n-1,0)
    {   
        cout << "[";
        forn(j,0,n-i)
        {
            cout << v1[i][j];
            if(j!=n-1-i||n-i>3) cout << " ";
        }
        cout << "]" << " ";
    }
    // cout << "[" << v1[n-1][0] << "]";
    
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    ll tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}