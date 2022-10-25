#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
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
void solve() 
{
    ll n; cin >> n;
    map<long long, long long> m;
    while (n % 2 == 0)
    {
        m[2]++;
        n = n/2;
    }
    while (n%3==0)
    {
        m[3]++;
        n = n/3;
    }
    for(ll i=5; i*i<=n; i+=6)
    {
        while(n%i==0)
        {
            m[i]++;
            n = n/i;
        }
        while(n%(i+2)==0)
        {
            m[i+2]++;
            n = n/(i+2);
        }
    }
    if(n>3) m[n]++;
    // print map
    cout << sz(m) << endl;
    fora(i, m) cout << i.first << " " << i.second << endl;
    
}
int main() 
{
    FAST_IO;
    // SieveOfEratosthenes();
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}