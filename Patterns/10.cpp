#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    // cout<<"Enter the no. of rows : ";
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        if (i != n - 1)
            cout << endl;
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}