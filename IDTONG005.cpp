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
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
int tt,i;
void GCD(ll n, ll m)
{
    set<long long> factor_n;
    set<long long> factor_m;
    ll ans=0;
    // find all factors of n
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i) 
            {
                // cout << i << " ";
                factor_n.insert(i);
            }
            else 
            {
                // cout << i << " " << n/i << " ";
                factor_n.insert(i);
                factor_n.insert(n/i);
            }
        }
    }
    // fora(i,factor_n) cout<<i<<" ";
    // find all factors of m
    for (int i=1; i<=sqrt(m); i++)
    {
        if (m%i == 0)
        {
            if (m/i == i) 
            {
                // cout << i << " ";
                factor_m.insert(i);
            }
            else 
            {
                // cout << i << " " << m/i << " ";
                factor_m.insert(i);
                factor_m.insert(m/i);
            }
        }
    }
    // compare two sets and find different
    set<long long> diff;
    set_difference(factor_n.begin(), factor_n.end(), factor_m.begin(), factor_m.end(), inserter(diff, diff.begin()));
    fora(i,diff) ans+=i;
    cout<<ans<<endl;
}
void solve() 
{
    ll n,m; cin >> n >> m;
    GCD(n,m);
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    cin >> tt; while(tt--) {solve();}
    // solve();
}
