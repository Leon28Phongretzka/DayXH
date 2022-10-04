#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
#define Len 100005
const int MOD = 1000000007;
void solve() 
{
    //freopen("bignumber.in", "r", stdin); freopen("bignumber.out", "w", stdout);
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        if(isdigit(s[0])) cout << s.length() << endl;
        else cout << s.length() - 1 << endl;
    }
}
int main() 
{
    FAST_IO;
    //freopen("bignumber.in", "r", stdin); freopen("bignumber.out", "w", stdout);
    //int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}