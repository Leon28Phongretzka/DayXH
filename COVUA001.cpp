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
#define forn1(i, n) for (int i = 0; i < int(n); i++)
#define forn2(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
const int MOD = 1000000007;
ll n,k,x,y;
vvb board;
vi X = {2,1,-1,-2,-2,-1,1,2};
vi Y = {1,2,2,1,-1,-2,-2,-1};
bool check(int x, int y, int n)
{
    if(x>=0 && x<n && y>=0 && y<n) return true;
    return false;
}
void Try(int a, int b, int step)
{
    if(step==k+1) return;
    board[a][b]=true;
    forn1(i,8)
    {
        if(check(a+X[i],b+Y[i],n)==true)
        {
            Try(a+X[i],b+Y[i],step+1);
        }
    }
}
void solve()
{
    {
        cin>>n>>k>>x>>y;
        board.assign(n,vb(n,false));
        Try(x-1,y-1,0);
        int ans=0;
        forn1(i,n)
        {
            forn1(j,n)
            {
                if(board[i][j]==true) ans++;
            }
        }
        cout<<ans<<'\n';
    }
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}