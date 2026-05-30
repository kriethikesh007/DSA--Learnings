#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // cout<<"Enter the Rows : ";
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A' + (n - i - 1); ch <= 'A' + (n - 1); ch++)
        {
            cout << ch<<" ";
        }
        cout << endl;
    }
    return 0;
}