
#include <bits/stdc++.h>
using namespace std;

int assignmentProblem(vector<vector<int>> &cost)
{
    int n = cost.size();
    int minCost = INT_MAX;
    vector<int> jobs;
    for (int i = 0; i < n; i++)
    {
        jobs.push_back(i);
    }
    do
    {
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            curr += cost[i][jobs[i]];
        }
        minCost = min(minCost, curr);
    } while (next_permutation(jobs.begin(), jobs.end()));
    return minCost;
}
int main()
{
    vector<vector<int>> cost = {
        {9, 2, 7},
        {6, 4, 3},
        {5, 8, 1}};

    cout << "Minimum assignment cost: " << assignmentProblem(cost);

    return 0;
}