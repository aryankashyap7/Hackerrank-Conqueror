#include <bits/stdc++.h>
using namespace std;

string appendAndDelete(string s, string t, int k)
{
    int same = 0;
    for (int i = 0; i < min(s.size(), t.size()); i++)
    {
        if (s[i] == t[i])
        {
            same++;
        }
        else
        {
            break;
        }
    }
    int diff = s.size() + t.size() - 2 * same;
    if (diff > k)
    {
        return "No";
    }
    else if (diff % 2 == k % 2)
    {
        return "Yes";
    }
    else if (s.size() + t.size() < k)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    int k;

    cin >> s >> t >> k;

    cout << appendAndDelete(s, t, k) << endl;

    return 0;
}