#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;

ll t, m, n, dp[105][105], a[105][105], x, y;
int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  	cin >> t;
  	while(t--)
  	{
	    cin >> m >> n;
	    for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}	
		} 
		
	    cin >> x >> y;

	    for(int i = 1; i <= n; i++)
		{
			dp[0][i] = INT_MAX, dp[m+1][i] = INT_MAX;
		}
	    for(int i = 1; i <= m; i++)
		{ 
			if(i != x) 
			{
				a[i][y] = INT_MAX;
			}
		}
	    for(int i = 1; i <= m; i++)
		{	 
			dp[i][y] = a[i][y];
		}
	    for(int j = y + 1; j <= n; j++)
		{
	      	for(int i = 1; i <= m; i++)
			{	
	        	dp[i][j] = min(min(dp[i-1][j-1], dp[i][j-1]), dp[i+1][j-1]) + a[i][j];
	      	}	
	    }
	    ll ans = INT_MAX;
	    for(int i = 1; i <= m; i++)
		{	 
			ans = min(ans,dp[i][n]);
		}
	    cout << ans << endl;
 	}
}