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
#define forn(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a; i >= b; i--)
#define fora(i, n) for(auto i:n)
#define Len 100005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
#define Len 100005
const int N = 1000007;
// We divine the string to 2 parts: Interger part and Decimal part
string DivineInterger(string a)
{
    string res = "";
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '.') break;
        res += a[i];
    }
    return res;
}
string DivineDecimal(string a)
{
    string res = "";
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '.') 
        {
            for(int j = i+1; j < a.size(); j++)
            {
                res += a[j];
            }
            break;
        }
    }
    return res;
}
void LengthEqualDecimal(string &a, string &b)
{
    while(a.size() < b.size()) a = a + '0';
    while(b.size() < a.size()) b = b + '0';
}
void LengthEqualInterger(string &a, string &b)
{
    while(a.size() < b.size()) a = '0' + a;
    while(b.size() < a.size()) b = '0' + b;
}
void findSum(string a, string b)
{
    string IntergerA = DivineInterger(a);
    string IntergerB = DivineInterger(b);
    string DecimalA = DivineDecimal(a);
    string DecimalB = DivineDecimal(b);
    LengthEqualDecimal(DecimalA, DecimalB);
    LengthEqualInterger(IntergerA, IntergerB);
    string res = "";
    int nho = 0;
    for(int i = DecimalA.size()-1; i >= 0; i--)
    {
        int temp = DecimalA[i] - '0' + DecimalB[i] - '0' + nho;
        nho = temp / 10;
        temp = temp % 10;
        res = char(temp + '0') + res;
    }
    // if(nho > 0) res = char(nho + '0') + res;
    // if find '.' in string a or b, we add '.' to res
    if(a.find('.') != string::npos || b.find('.') != string::npos) res = '.' + res;
    for(int i = IntergerA.size()-1; i >= 0; i--)
    {
        int temp = IntergerA[i] - '0' + IntergerB[i] - '0' + nho;
        nho = temp / 10;
        temp = temp % 10;
        res = char(temp + '0') + res;
    }
    if(nho > 0) res = char(nho + '0') + res;
    cout << res;
}
// Driver Code
int main()
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
        // cout << v[1] << endl;
        // cout << v[0] << " " << v[2];
        if(v[1]=="+") findSum(v[0],v[2]);
        // else cout << mult(v[0],v[2]);
        cout << endl;
    }
   
    return 0;
}