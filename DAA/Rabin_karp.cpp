#include <iostream>
#include <vector>
using namespace std;

vector<int> rabin(const string &txt, const string &pat)
{
    int m = pat.length(), n = txt.length();
    const int q = 101, d = 256;
    int h = 1;
    for (int i = 0; i < m - 1; i++)
    {
        h = (h * d) % q;
    }
    int ht = 0, hp = 0;
    for (int i = 0; i < m; i++)
    {
        ht = (ht * d + txt[i]) % q;
        hp = (hp * d + pat[i]) % q;
    }
    vector<int> ans;
    for (int i = 0; i <= n - m; i++)
    {
        if (ht == hp)
        {
            int j;
            for (j = 0; j < m; j++)
            {
                if (txt[i + j] != pat[j])
                {
                    break;
                }
            }
            if (j == m)
            {
                ans.push_back(i);
            }
        }
        else
        {
            ht = (d * (ht - txt[i] * h) + txt[i + m]) % q;
            if (ht < 0)
            {
                ht += q;
            }
        }
    }
    return ans;
}

int main()
{
    string txt = "abcabccbaabc";
    string pat = "abc";
    vector<int> index = rabin(txt, pat);
    for (auto &i : index)
    {
        cout << i << " ";
    }
}