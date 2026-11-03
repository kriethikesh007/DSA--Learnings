#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<int> &x, int n, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (x[i] == col || abs(x[i] - col) == abs(i - row))
        {
            return false;
        }
    }
    return true;
}

bool solve(vector<int> &x, int n, int row)
{
    if (row == n)
    {
        for (int i = 0; i < row; i++)
        {
            cout << x[i] + 1 << " ";
        }
        cout<<"\n";
        return true;
    }
    bool found = false;
    for (int col = 0; col < n; col++)
    {
        if (isSafe(x, n, row, col))
        {
            x[row] = col;
            if (solve(x, n, row + 1))
                found = true;

            x[row] = -1;
        }
    }
    return found;
}

int main()
{
    int n;
    cout << "Enter the no. of N : ";
    cin >> n;
    vector<int> x(n, -1);
    if (!solve(x, n, 0))
        cout << "Not Possible";
    return 0;
}