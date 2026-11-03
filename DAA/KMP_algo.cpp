#include <iostream>
#include <vector>
using namespace std;

void construct_lps(const string &pat, vector<int> &lps)
{
    int m = pat.length();
    int len = 0, i = 1;
    lps[0] = 0;
    while (i < m)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMP(string txt, string pat)
{
    int n = txt.length(), m = pat.length();
    vector<int> lps(m);
    construct_lps(pat, lps);
    int i = 0, j = 0;
    cout << "String Pattern Matching index's : ";
    while (i < n)
    {
        if (txt[i] == pat[j])
        {
            i++;
            j++;
            if (j == m)
            {
                cout << (i - j) << " ";
                j = lps[j - 1];
            }
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
}

int main()
{
    string text = "aaaaaa";
    string pattern = "aaa";
    KMP(text, pattern);
    return 0;
}