#include <bits/stdc++.h>
using namespace std;

void naive(string text, string pat)
{
    int m = pat.length();
    int n = text.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (pat[j] != text[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << "Pattern found at index " << i << endl;
        }
    }
}

int main()
{
    string text, pat;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern: ";
    getline(cin, pat);
    naive(text, pat);
}
