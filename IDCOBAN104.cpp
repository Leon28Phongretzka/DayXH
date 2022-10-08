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
#define forn(i, n) for (int i = 1; i <= ll(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
const int N = 1000007;
string add(string a, string b)
{
    string res="";
    int n=a.size();
    int m=b.size();
    int i=n-1, j=m-1;
    int carry=0;
    for(int i=n-1, j=m-1; i>=0 || j>=0; i--, j--)
    {
        int m=(i>=0)?a[i]-'0':0;
        int n=(j>=0)?b[j]-'0':0;
        int sum=m+n+carry;
        if (sum >= 10)
        {
            sum = sum % 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        res = string(1, sum + '0') + res;
    }
    if (carry == 1)
    {
        res = string(1, '1') + res;
    }
    return res;
}
string check_str_3(string s)
{
    int n=s.size();
    string res="";
    for(int i=0; i<n; i++)
    {
        if (s[i] == '5')
        {
            res += "3";
        }
        else res+=s[i];
    }
    return res;
}
string check_str_5(string s)
{
    int n=s.size();
    string res="";
    for(int i=0; i<n; i++)
    {
        if (s[i] == '3')
        {
            res += "5";
        }
        else res+=s[i];
    }
    return res;
}
void solve() 
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        vector<string> v;
        while(ss>>s)
        {
            v.push_back(s);
        }
        // cout << v[0] << " " << v[1] << endl;
        cout << add(check_str_3(v[0]), check_str_3(v[1])) << " ";
        cout << add(check_str_5(v[0]), check_str_5(v[1])) << endl;
    }
}
int main() 
{
    FAST_IO;
    //freopen("bignumber.in", "r", stdin); freopen("bignumber.out", "w", stdout);
    //int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}