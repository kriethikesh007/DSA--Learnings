#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // cout<<"Enter the Rows : ";
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j < i)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        cout << endl;
    }
    return 0;
}