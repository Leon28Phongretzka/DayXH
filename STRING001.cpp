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
#define forn(i, n) for (int i = 1; i < int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 1000005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
ll tt;
void solve() 
{
    string input; getline(cin, input);
    stringstream ss(input);
    string word;
    string child, parent;
    for(int i = 0; i <=5; i++)
    {
        ss >> word;
        if(i == 2)  
        {
            child = word;
            // erase the first character and two last characters 
            child.erase(0, 1);
            child.erase(child.size() - 2, 2);
        }
        if(i == 5) 
        {
            parent = word;
            // erase the first character and the last character
            parent.erase(0, 1);
            parent.erase(parent.size() - 1, 1);
        }
    }
    // cout << child << " " << parent << endl;
    if(child == "" || parent == "") 
    {
        cout << "0" << endl;
        return;
    }
    // if string child is occured in string parent
    if(parent.find(child) != string::npos) 
    {
        // find the first occurence of string child in string parent
        int pos = parent.find(child);
        // print the position of the first occurence of string child in string parent
        cout << pos << endl;
    }
    else cout << "-1" << endl;
    

}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    cin >> tt; cin.ignore(); while(tt--) {solve();}
    // solve();
}