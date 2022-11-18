// C++ Program for Count all possible visited cells of a knight after N moves
// n is size of chessboard
// k is number of moves
// i and j are starting position of knight
// Returns count of possible moves

#include<bits/stdc++.h>
using namespace std;
vector<int> X = {2, 1, -1, -2, -2, -1, 1, 2};
vector<int> Y = {1, 2, 2, 1, -1, -2, -2, -1};
long long getCount(vector<vector<bool>> &board, int n, int x, int y, int k)
{
	if (k == 0)
		return 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int x1 = x + X[i];
		int y1 = y + Y[i];
		if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < n && !board[x1][y1])
		{
			board[x1][y1] = true;
			count += (1 + getCount(board, n, x1, y1, k - 1));
		}
	}
	return count;
}
long long getCzt(int x, int y, int k, int n)
{
	// Created board of size n*n and initialized with false
	vector<vector<bool>> board(n, vector<bool>(n));
	board[x][y] = true;
	return 1 + getCount(board, n, x, y, k);
}
void solve() 
{
	int n,k,x,y;
	cin >> n >> k >> x >> y;
	cout << getCzt(x, y, k, n) << endl;
}
int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}



