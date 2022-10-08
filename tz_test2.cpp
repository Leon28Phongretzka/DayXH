#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<ll, ll> mii;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
typedef pair<ll, ll> pii;
typedef pair<double, double> pdd;
typedef pair<bool, ll> pbl;
typedef pair<ul, ll> pui;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<ll> vi;
typedef vector<ll>::iterator ip;
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
#define sz(s) ((ll)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (ll i = 1; i <= ll(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 1000005
const double pi=3.14159265358979323846;
const ll MOD = 1000000007;
ll tt;
ll findPowerOfP(ll n, ll p)
{
	ll count = 0;
	ll r=p;
	while (r <= n) 
    {
		// calculating floor(n/r)
		// and adding to the count
		count += (n / r);

		// increasing the power of p
		// from 1 to 2 to 3 and so on
		r = r * p;
	}
	return count;
}

// returns all the prime factors of k
vector<pair<ll, ll> > primeFactorsofK(ll k)
{
	// vector to store all the prime factors
	// along with their number of occurrence
	// in factorization of k
	vector<pair<ll, ll> > ans;

	for (ll i = 2; k != 1; i++) {
		if (k % i == 0) {
			ll count = 0;
			while (k % i == 0) {
				k = k / i;
				count++;
			}

			ans.pb(mp(i, count));
		}
	}
	return ans;
}

// Returns largest power of k that
// divides n!
ll largestPowerOfK(ll n, ll k)
{
	vector<pair<ll, ll>> vec;
	vec = primeFactorsofK(k);
	ll ans = Len*3;
	for (ll i = 0; i < vec.size(); i++)
		ans = min(ans, findPowerOfP(n,vec[i].first) / vec[i].second);
	return ans;
}

// Driver code
void solve()
{
    ll n,k; cin >> n >> k;
	cout << largestPowerOfK(n,k) << endl;
}
int main()
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    cin >> tt; while(tt--) {solve();}
    // solve();
}