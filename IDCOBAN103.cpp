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
#define forn(i, n) for (int i = 1; i <= ll(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
const int N = 1000007;
vl v(N);
void DigZit()
{
    // Find the number of digits of n!
    double digits = 0;
    v[0]=v[1]=1;
    for(int i=2; i<=N; i++)
    {
        digits += log10(i);
        v[i]=floor(digits)+1;
    }
    // fora(i,v) cout<<i<<" ";
}

void solve() 
{
    // freopen("bignumber.in", "r", stdin); freopen("bignumber.out", "w", stdout);
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        ll n; cin >> n;
        if(n==1) cout << 4 << " " << 0 << " " << 1 << " " << 2 << " " << 3 << endl;
        else if(n==2) cout << 1 << " " << 4 << endl;
        else if(n==3) cout << 2 << " " << 5 << " " << 6 << endl;
        else
        {
            // if n exist in v, print index v[i]=n
            // else print -1
            if(binary_search(v.begin(), v.end(), n)) cout << 1 << " " << lower_bound(v.begin(), v.end(), n)-v.begin() << endl;
            else cout << -1 << endl;
        }
    }
}
int main() 
{
    FAST_IO;
    DigZit();
    //freopen("bignumber.in", "r", stdin); freopen("bignumber.out", "w", stdout);
    // int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}