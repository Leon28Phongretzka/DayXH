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
#define fora(x, n) for(auto x:n)
#define Len 100005
const int MOD = 1000000007;
const int arr[4] = {0, 1, 4, 9};
int n;
bool found = false;
void rec(ll cur, ll num)
{
    if (num == 0)
    {
        string s = to_string(cur);
        if (s.size() == n)
        {
            ll k = sqrt(cur);
            if (k * k == cur)
            {
                cout << cur << endl;
                found = true;
            }
        }
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (found)
                return;
            rec(cur * 10 + arr[i], num - 1);
        }
    }
}
void solve()
{
    cin >> n;
    if(n==1)
    {
        cout << 0 << endl;
        return;
    }
    if(n&1)
    {
        string s(n-1, '0');
        s="1"+s;
        cout << s << endl;
    }
    else rec(0,n);
    found = false;
}
int main()
{
    FAST_IO;
    //solve();
    int tt; cin >> tt; while(tt--) solve();
}