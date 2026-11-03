#include <bits/stdc++.h>
using namespace std;

void subset(vector<int> &arr, vector<int> &s, int sum, int i, int target)
{
    if (sum == target)
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
        return;
    }

    if(i==arr.size() || sum>target)
        return;

    s.push_back(arr[i]);
    subset(arr, s, sum + arr[i], i + 1, target);

    s.pop_back();
    subset(arr, s, sum, i + 1, target);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int t = 14;
    vector<int> s;
    subset(arr, s, 0, 0, t);
}