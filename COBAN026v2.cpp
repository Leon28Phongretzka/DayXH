#include <iostream>
using namespace std;


// give appropriate maximum to avoid overflow
const int MAX = 1000000;

// dist[i][j] represents shortest distance to go from i to j
// this matrix can be calculated for any given graph using
// all-pair shortest path algorithms
int dist[n + 1][n + 1] = 
{
	{ 0, 0, 0, 0, 0 }, 
    { 0, 0, 10, 15, 20 },
	{ 0, 10, 0, 25, 25 }, 
    { 0, 15, 25, 0, 30 },
	{ 0, 20, 25, 30, 0 },
};

// memoization for top down recursion
int memo[n + 1][1 << (n + 1)];

int fun(int i, int mask)
{

	if (mask == ((1 << i) | 3))
		return dist[1][i];
	// memoization
	if (memo[i][mask] != 0)
		return memo[i][mask];

	int res = MAX; // result of this sub-problem

	for (int j = 1; j <= n; j++)
		if ((mask & (1 << j)) && j != i && j != 1)
			res = min(res, fun(j, mask & (~(1 << i)))
									+ dist[j][i]);
	return memo[i][mask] = res;
}

int main()
{
    ll n,m; cin >> n,m;
    for(int i=1; i<=m; ++i)
    {
        ll u,v,w; cin >> u,v,w;
        dist[u][v] = w;
    }
    
}

