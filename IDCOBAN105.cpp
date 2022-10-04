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
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
const int MOD = 1000000007;
ll find_2min(ll a[], ll n)
{
    // find sum of two minimum element in a
    ll min1 = INT_MAX, min2 = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < min1)
        {
            min2 = min1;
            min1 = a[i];
        }
        else if (a[i] < min2 && a[i] != min1)
            min2 = a[i];
    }
    return min1 + min2;
}
void solve() 
{
    ll n; cin >> n;
    ll a[n];
    vl b;
    forn(i,n) cin >> a[i];
    sort(a,a+n,greater<ll>());
    // fora(i,a) cout << i << " "; cout << endl;
    fora(i,a) b.pb(i);
    // fora(i,b) cout << i << " "; cout << endl;
    ll ans=0;
    for(ll i=n-1; i>=1; i--)
    {
        ans+=b[i]+b[i-1];
        b.pb(b[i]+b[i-1]);
        sort(b.begin(),b.end(),greater<ll>());
        // erase 2 last element
        b.pop_back();
        b.pop_back();
        // fora(i,b) cout << i << " "; cout << endl;
    }
    cout << ans << endl;

}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}