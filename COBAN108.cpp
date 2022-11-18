
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
#define For(i, a, b) for (ll i = a; i < b; ++i)
#define Forr(i, a, b) for (ll i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;

string mul(string a, string b)
{
    string res = "";
    int n = a.size();
    int m = b.size();
    int i, j;
    int carry = 0;
    for (i = n - 1; i >= 0; i--)
    {
        int sum = 0;
        for (j = m - 1; j >= 0; j--)
        {
            sum = (a[i] - '0') * (b[j] - '0') + carry;
            carry = sum / 10;
            sum = sum % 10;
            res = (char)(sum + '0') + res;
        }
        if (carry > 0)
        {
            res = (char)(carry + '0') + res;
            carry = 0;
        }
        res = res + "0";
    }
    while (res[0] == '0' && res.size() > 1)
        res.erase(0, 1);
    return res;
}

bool check(string s)
{
    for (auto i : s)
        if (i != 6 && i != 8)
            return false;
    return true;
}

void solve()
{
    ll x;
    cin >> x;
    if (x % 5 == 0 || x % 7 == 0)
    {
        cout << -1 << endl;
        return;
    }
    string s = to_string(x);
    For(i, 1, 1000000)
    {
        string s1 = to_string(i);
        string s2 = mul(s1, s1);
        if (s2.length() > 200)
        {
            cout << -1 << endl;
            return;
        }
        if (check(s2))
        {
            cout << s2 << endl;
            return;
        }
    }
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