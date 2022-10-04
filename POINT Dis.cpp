#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
#define Len 100005
const int MOD = 1000000007;
double dist(double x1, double y1, double x2, double y2)
{
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
void solve() 
{
    freopen("points.inp", "r", stdin); freopen("points.out", "w", stdout);
    ll t; cin >> t;
    double a,b;
    vector<pair<double, double>> v(t);
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        v[i]={a,b};
    }
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<t; j++)
        {
            // double res=dist(v[i].first, v[i].second, v[j].first, v[j].second);
            cout << fixed << setprecision(2) << dist(v[i].first, v[i].second, v[j].first, v[j].second);
            if(j!=t-1) 
            {
                cout << " ";
            }
        }
        if(i!=t-1) cout << endl;
    }

}
int main() 
{
    FAST_IO;
    // freopen("points.in", "r", stdin); freopen("points.out", "w", stdout);
    // int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}