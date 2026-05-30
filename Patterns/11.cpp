#include <iostream>

using namespace std;

int main()
{
    int n = 5, c = 1;
    // cout<<"Enter the no. of rows : ";
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            c = 1;
        }
        else
        {
            c = 0;
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << c << " ";
            c = 1 - c;
        }
        cout << endl;
    }
}