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
#define Len 1000005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
int tt;
bool prime[1005];
void Sett()
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= 1000; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 1000; i += p)
                prime[i] = false;
        }
    }
}
ll power(ll a, ll n)
{
    ll ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (ans * a);
        a = (a * a);
        n >>= 1;
    }
    return ans;
}
ll szn006(ll n, ll m, ll x)
{
    // DP solution to find the number of ways to represent n as sum of m prime numbers
    ll dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    

}
void solve() 
{
    ll n; cin >> n;
    cout << szn006(n) << endl;
}
int main() 
{
    FAST_IO;
    Sett();
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    cin >> tt; while(tt--) {solve();}
    // solve();
}