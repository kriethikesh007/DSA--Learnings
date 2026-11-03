#include <bits/stdc++.h>
using namespace std;

int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

bool solve(vector<vector<int>> &board, int n, int x, int y, int move)
{
    if (move == n * n)
    {
        return true;
    }
    for (int k = 0; k < 8; k++)
    {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (nx >= 0 && ny >= 0 && nx < n && ny < n && board[nx][ny] == -1)
        {
            board[nx][ny] = move;
            if (solve(board, n, nx, ny, move + 1))
            {
                return true;
            }
            board[nx][ny] = -1;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    vector<vector<int>> board(n, vector<int>(n, -1));
    board[0][0]=0;
    if (solve(board, n, 0, 0, 1))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << "  ";
            }
            cout << endl;
        }
    }

    return 0;
}