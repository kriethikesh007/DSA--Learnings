#include <bits/stdc++.h>
using namespace std;

int knsp(int w, vector<int> &weight, vector<int> &value)
{
    int ans = 0, n = weight.size();
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int total_weight = 0, total_value = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                total_value += value[i];
                total_weight += weight[i];
            }
        }
        if (total_weight <= w)
        {
            ans = max(ans, total_value);
        }
    }
    return ans;
}
int main()
{
    vector<int> weight = {2, 5, 10, 5};
    vector<int> value = {20, 30, 50, 10};
    int w = 16;
    cout << knsp(w, weight, value);
    return 0;
}