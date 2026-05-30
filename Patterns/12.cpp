#include <iostream>
using namespace std;

int main()
{
    int n = 4, space = 2 * (n - 1);
    // cout<<"Enter the Rows : ";
    // cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        space -= 2;
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}