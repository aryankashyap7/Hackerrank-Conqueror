#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int index = 0;
        string t, m = "hackerrank";
        cin >> t;
        for (int i = 0; i < t.size(); i++)
        {
            if (m[index] == t[i])
                m.erase(0, 1);
        }
        if (m == "")
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}