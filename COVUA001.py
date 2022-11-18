# Python Program for Count all possible visited cells of a knight after N moves
# n is size of chessboard
# k is number of moves
# i and j are starting position of knight
# Returns count of possible moves
XAxis = [2, 1, -1, -2, -2, -1, 1, 2]
YAxis = [1, 2, 2, 1, -1, -2, -2, -1]
def isSafe(x, y, visited):
    if (x >= 0 and y >= 0 and x < n and y < n and not visited[x][y]):
        return True
    return False
def countPaths(n, k, i, j, visited):
    if (k == 0):
        return 1
    visited[i][j] = True
    count = 0
    for l in range(8):
        if (isSafe(i + XAxis[l], j + YAxis[l], visited)):
            count += countPaths(n, k - 1, i + XAxis[l], j + YAxis[l], visited)
    visited[i][j] = False
    return count
# Driver program to test above function
# n,k,i,j is input split
n=8
k=1
i=1
j=1
visited = [[False for i in range(n + 1)] for j in range(n + 1)]
print(countPaths(n, k, i, j, visited))



