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
#define Len 1000005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
ll tt;
string add(string a, string b)
{
    string ans = "";
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;
    while (i >= 0 || j >= 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            sum += b[j] - '0';
            j--;
        }
        ans += to_string(sum % 10);
        carry = sum / 10;
    }
    if (carry)
        ans += to_string(carry);
    reverse(ans.begin(), ans.end());
    return ans;
}
void substring(string s)
{
    ll ans=0;
    map<string, int> m;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            m[s.substr(i, len)]++;
        }
    }
    for (auto i : m) ans++;
    cout << ans << " ";
}
void solve() 
{
    ll n; cin >> n;
    vl a(n);
    string s;
    forn(i,n) 
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    forn(i,n) 
    {
        s += to_string(a[i]);
    }
    // cout << s << endl;
    substring(s);
    cout << "[";
    for(int i=0; i<n; i++)
    {
        cout << a[i];
        if(i!=n-1) cout << ", ";
    }
    cout << "]" << endl;
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    cin >> tt; while(tt--) {solve();}
    // solve();
}