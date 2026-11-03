#include <bits/stdc++.h>
    using namespace std;

void boyerMoore(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();

    if (m == 0 || m > n)
        return;

    vector<int> last(256, -1);

    for (int i = 0; i < m; i++)
    {
        last[(unsigned char)pattern[i]] = i;
    }

    int shift = 0;

    while (shift <= n - m)
    {
        int j = m - 1;

        while (j >= 0 && pattern[j] == text[shift + j])
        {
            j--;
        }

        if (j < 0)
        {
            cout << "Pattern found at : " << shift << '\n';

            if (shift + m < n)
            {
                shift += max(
                    1,
                    m - last[(unsigned char)text[shift + m]]);
            }
            else
            {
                shift++;
            }
        }
        else
        {
            shift += max(
                1,
                j - last[(unsigned char)text[shift + j]]);
        }
    }
}

int main()
{
    string text = "ABAAABCD";
    string pattern = "ABC";

    boyerMoore(text, pattern);

    return 0;
}