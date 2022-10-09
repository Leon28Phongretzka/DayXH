/**
 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer
 */
int minPathSum(int** A, int n11, int n12) 
{
    int dp[n11][n12];
    int i,j;for(i = 0;i<n11;i++)
    for(j = 0;j<n12;j++)
    {
		dp[i][j] = A[i][j];
		if(i==0 && j==0)continue;
		int m = INT_MAX ,n = INT_MAX;
		if(i>0)
		m = dp[i-1][j];
		if(j>0) n =  dp[i][j-1];
		if(m>n) dp[i][j] = dp[i][j]+n;
		else dp[i][j] = dp[i][j]+ m; 
    }
    return dp[n11-1][n12-1];
}
