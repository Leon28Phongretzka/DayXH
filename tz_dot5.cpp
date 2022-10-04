#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define pb push_back
const ll mxn = 2e6;
ll n,k;
vector<ll> v;
void setup()
{
    v.pb(1); v.pb(1);
    ll start = 1;
    ll ed = 1;
    ll pos = 2;
    while (ed <= 109)
    {
        v.pb(start + ed);
        start = ed;
        ed = v[pos];
        pos++;
    }
}
ll ans(ll x, ll left, ll last)
{
    if (left == 1)
    {
        if (binary_search(v.begin(),v.end(),x) && x <= last)
        {
            return 1;
        }
        else return 0;
    }
    else
    {
        ll final_ans = 0;
        ll pos = upper_bound(v.begin(),v.end(),min(last,x)) - v.begin() - 1;
        for (ll i = pos; i >= 0; i--) final_ans += ans(x-v[i],left-1,v[i]);
        return final_ans;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // freopen("BAI3.inp","r",stdin);
    // freopen("BAI3.out","w",stdout);
    setup();
    ll t; cin >> t;
    while (t != 0)
    {
        cin >> n >> k;
        cout << ans(n,k,109) << endl;
        t--;
    }
}