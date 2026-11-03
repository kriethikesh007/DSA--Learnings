#include <iostream>
using namespace std;

void Navie_algorithm(string text, string pattern)
{
    int n = text.length(), m = pattern.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (text[i + j] != pattern[j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    string text;
    string pattern;
    cout << "Enter the Text : ";
    cin >> text;
    cout << "Enter the Pattern : ";
    cin >> pattern;
    Navie_algorithm(text, pattern);
    return 0;
}