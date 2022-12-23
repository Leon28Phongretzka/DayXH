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
int tt,i;
int n;
vi res;
void dfs(int i, vector<int> &row, vector<bool> &col, vector<bool> &main, vector<bool> &anti, int &count) 
{
        if (i == row.size()) 
        {
            count++;
            return;
        }
       for (int j = 0; j < col.size(); j++) 
       {
         if (col[j] && main[i+j] && anti[i+col.size()-1-j]) 
         {
             row[i] = j;                                                // row[i] = j: hang i, cot j
             col[j] = main[i+j] = anti[i+col.size()-1-j] = false;       // col[j] = false: cot j da duoc dat quan hau
             dfs(i+1, row, col, main, anti, count);                     // main[i+j] = false: duong cheo chinh i+j da duoc dat quan hau
             col[j] = main[i+j] = anti[i+col.size()-1-j] = true;        // anti[i+col.size()-1-j] = false: duong cheo phu i+col.size()-1-j da duoc dat quan hau
      }
    }
}
int totalNQueens(int n) 
{
    vector<bool> col(n, true);                                          // col[n] = true: cot n chua duoc dat quan hau
    vector<bool> anti(2*n-1, true);                                     // main[2*n-1] = true: duong cheo chinh 2*n-1 chua duoc dat quan hau
    vector<bool> main(2*n-1, true);                                     // anti[2*n-1] = true: duong cheo phu 2*n-1 chua duoc dat quan hau
    vector<int> row(n, 0);                                              // row[n] = 0: hang n chua duoc dat quan hau
    int count = 0;                                                      // row[n] = j: hang n, cot j
    dfs(0, row, col, main, anti, count);                                // col[j] = false: cot j da duoc dat quan hau
    return count;
}
void solve() 
{
    int n; cin >> n;
    cout << totalNQueens(n) << endl;

}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    cin >> tt; for (i = 1; i <= tt; i++) {solve();}
    // solve();
}