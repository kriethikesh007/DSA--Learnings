#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    // cout<<"Enter the no. of rows : ";
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}