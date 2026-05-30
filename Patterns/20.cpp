#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    // cout<<"Enter the no. of rows : ";
    // cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (n * 2) - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        if (i != n)
            cout << endl;
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i * 2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}