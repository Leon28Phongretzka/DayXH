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
int tt;
vi a2,a3,a4,a5,a6,a7,a8,a9,a10;
void solve() 
{
    forn(i,32) a2.pb(i*i);
    forn(i,9)  a3.pb(pow(i,3));
    forn(i,6)  a4.pb(pow(i,4));
    forn(i,5)  a5.pb(pow(i,5));
    forn(i,3)  a6.pb(pow(i,6));
    forn(i,2)  a7.pb(pow(i,7));
    forn(i,2)  a8.pb(pow(i,8));
    forn(i,2)  a9.pb(pow(i,9));
    forn(i,2)  a10.pb(pow(i,10));
    


}
int main() 
{
    FAST_IO;
    // Fibo();
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}