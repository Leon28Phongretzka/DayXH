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
ll graph[25][25];
ll dist[25][25];

// Travelling Salesman Problem
// Tìm đường đi ngắn nhất đi qua tất cả các đỉnh và quay lại đỉnh xuất phát voi đồ thị vô hướng có trọng số không âm
// Dùng thuật toán Floyd-Warshall
// Độ phức tạp O(n^3)

void floyd(ll n)
{
    For(k, 1, n + 1)
    {
        For(i, 1, n + 1)
        {
            For(j, 1, n + 1)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}
const int n = 5;
ll memo[n + 1][1 << (n + 1)];
ll fun(int i, int mask)
{

    if (mask == ((1 << i) | 3))
        return dist[1][i];
    if (memo[i][mask] != 0)
        return memo[i][mask];
    ll res = 1e9;
    for (int j = 1; j <= n; j++)
        if ((mask & (1 << j)) && j != i && j != 1)
            res = min(res, fun(j, mask & (~(1 << i))) + dist[j][i]);
    return memo[i][mask] = res;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    For(i, 1, m + 1)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = w;
    }
    floyd(n);
    ll res = 1e9;
    For(i, 1, n + 1)
    {
        res = min(res, dist[i][i]);
    }
    if (res == 1e9)
        cout << -1;
    else
        cout << res;
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