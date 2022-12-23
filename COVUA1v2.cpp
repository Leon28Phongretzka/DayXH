// C++ Program for Count all possible visited cells of a knight after N moves
// n is size of chessboard
// k is number of moves
// i and j are starting position of knight
// Returns count of possible moves

#include<bits/stdc++.h>
using namespace std;
vector<int> X = {2, 1, -1, -2, -2, -1, 1, 2};
vector<int> Y = {1, 2, 2, 1, -1, -2, -2, -1};
bool check_in_the_box(int x, int y, int n)
{
    if(x>=0 && x<n && y>=0 && y<n) return true;
    return false;
}
void solve() 
{
	int n,k,x,y;
	cin >> n >> k >> x >> y;
	board.assign(n, vb(n, false));

	
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



