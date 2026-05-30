#include <iostream>
using namespace std;
int main()
{
    int n=5,c=1;
    // cout << "Enter the Rows : ";
    // cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1 ; j++)
        {
            cout <<  c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}