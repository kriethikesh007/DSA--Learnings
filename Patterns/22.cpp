#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // cout << "Enter the Rows : ";
    // cin >> n;
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int top = i;
            int left = j;
            int right = size - j - 1;
            int bottom = size - i - 1;
            cout << n - min(min(top, bottom), min(left, right)) << " ";
        }
        cout << endl;
    }
    return 0;
}