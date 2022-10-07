#include <bits/stdc++.h>

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define clean() cin.ignore(numeric_limits<streamsize>::max(), '\n');
#define pb push_back
#define fi first
#define se second
#define Mod 1000000007
#define ld long double
#define ll long long
#define lli unsigned long long int
#define For(i, a, b) for (int i = a; i < b; ++i)
#define Forr(i, a, b) for (int i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;
ll a[200][200], dp[200][200];

void solve()
{
    ll n, m, ans = -Mod;
    cin >> n >> m;
    For(i, 1, m + 1)
        dp[0][i] = dp[n + 1][i] = -Mod;
    For(i, 1, n + 1)
    {
        For(j, 1, m + 1)
        {
            cin >> a[i][j];
        }
    }
    if (m == 1 && n == 1)
    {
        cout << a[1][1] << '\n';
        return;
    }
    For(j, 1, m + 1)
    {
        For(i, 1, n + 1)
        {
            dp[i][j] = a[i][j] + max(dp[i - 1][j - 1], max(dp[i][j - 1], dp[i + 1][j - 1]));
        }
    }
    For(i, 1, n + 1)
    {
        ans = max(ans, dp[i][m]);
    }
    cout << ans << '\n';
}

int main()
{
    faster();
    int test = 1;
    cin >> test;
    // clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}