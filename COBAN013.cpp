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
bool prime[N + 1]; 
void SieveOfEratosthenes() 
{ 
    memset(prime, true, sizeof(prime)); 
    prime[0] = false;
    prime[1] = false; 
  
    for(int i = 2; i * i <= N; ++i) 
    {
         if(prime[i] == true) 
         {
             for(int j = i * i; j <= N; j += i)
                 prime[j] = false;
        } 
    } 
}
void solve() 
{
    int tt; cin >> tt;
    while(tt--)
    {
        int n; cin >> n;
        vector<int> a;
        int pos=0;
        int mnz=0;
        forn(i, n)
        {
            int x; cin >> x;
            a.pb(x);
        }
        sort(a.begin(), a.end());
        if(binary_search(a.begin(), a.end(), 0)) 
        {
            cout << -1 << endl;
            continue;
        }
        fora(i,a)
        {
            if(i>0) pos++;
            else mnz++;
        }
        cout << min(pos,mnz) << endl;
    }
}
int main() 
{
    FAST_IO;
    SieveOfEratosthenes();
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    // int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}