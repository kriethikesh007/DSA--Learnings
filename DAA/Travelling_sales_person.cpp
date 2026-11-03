#include <bits/stdc++.h>
using namespace std;

int tsp(const vector<vector<int>> &graph, int start)
{
    int n = graph.size();
    vector<int> cities;
    for (int i = 0; i < n; i++)
    {
        if (i != start)
            cities.push_back(i);
    }
    int min_cost = INT_MAX;
    do
    {
        int cur_cost = 0, k = start;
        for (int city : cities)
        {
            cur_cost += graph[k][city];
            k = city;
        }
        cur_cost += graph[k][start];
        min_cost = min(min_cost, cur_cost);
    } while (next_permutation(cities.begin(), cities.end()));
    return min_cost;
}

int main()
{
    vector<vector<int>> graph = {
        {0, 10, 20, 30},
        {10, 0, 20, 35},
        {10, 20, 0, 45},
        {10, 30, 50, 0}};
    int start = 2;
    cout << "Minimum cost : " << tsp(graph, start);
    return 0;
}