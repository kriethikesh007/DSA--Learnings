#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    // cout << "Enter the Rows : ";
    // cin >> n;
    for (int i = n; i >=0; i--)
    {
        char c = 'A';
        for (int j = 0; j < i; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}