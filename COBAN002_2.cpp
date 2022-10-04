#include <bits/stdc++.h>

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define clear() cin.ignore(numeric_limits<streamsize>::max(), '\n');
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

const int arr[4] = {0, 1, 4, 9};
int n;
bool ok = false;

void process(ll cur, ll num)
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
                ok = true;
            }
        }
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (ok)
                return;
            process(cur * 10 + arr[i], num - 1);
        }
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {

        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (n & 1)
        {
            string s(n - 1, '0');
            s = "1" + s;
            ll x = stoll(s);
            cout << x << endl;
        }
        else
            process(0, n);
        ok = false;
    }
    pause();
}