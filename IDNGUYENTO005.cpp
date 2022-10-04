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
#define forn(i, n) for (int i = 2; i <= ll(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 1000005
const int N = 1000000007;
ll ans_ft[Len];
ll max_factors(ll n) 
{
    ll t=n;
    // mll m;
    ll margt=-1e9-7;

    while (n % 2 == 0)
    {
        margt=max(margt,2ll);
        n = n/2;
    }
    while (n%3==0)
    {
        margt=max(margt,3ll);
        n = n/3;
    }
    for(ll i=5; i*i<=n; i+=6)
    {
        while(n%i==0)
        {
            margt=max(margt,i);
            n = n/i;
        }
        while (n % (i + 2) == 0)
        {
            margt=max(margt,i+2);
            n /= (i + 2);
        }
    }
    if(n>2) margt=max(n,margt);
    return margt;
}
void sum_mft(ll n)
{
    forn(i,n) ans_ft[i]=max_factors(i);
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; 
    if(tt<10) sum_mft(999);
    else sum_mft(Len);
    for (int i = 1; i <= tt; i++) 
    {
        ll n; cin >> n;
        ll ans=0;
        for(ll i=2; i<=n; i++)
        {
            ans+=ans_ft[i];
        }
        cout << ans << endl;
    }
    // solve();
}