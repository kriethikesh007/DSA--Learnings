#include <bits/stdc++.h>
using namespace std;

void primes(int n)
{
    if (n < 2)
        return;
    int k = (n - 1) / 2;
    vector<bool> marked(k + 1, false);

    for (int i = 1; i <= k; i++)
    {
        for (int j = i; i + j + 2 * i * j <= k; j++)
        {
            marked[i + j + 2 * i * j] = true;
        }
    }
    cout << 2 << " ";
    for (int i = 1; i <= k; i++)
    {
        if (!marked[i])
            cout << 2 * i + 1 << " ";
    }
}
int main()
{
    primes(100);
    return 0;
}