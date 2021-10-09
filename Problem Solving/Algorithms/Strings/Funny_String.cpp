#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string funny, ynnuf;
        bool pass = 1;
        cin >> funny;
        ynnuf = funny;
        reverse(ynnuf.begin(), ynnuf.end());

        for (int i = 0; i < funny.size() - 1; i++)
        {
            if (abs(funny[i + 1] - funny[i]) != abs(ynnuf[i + 1] - ynnuf[i]))
                pass = false;
        }
        if (pass == 1)
        {
            cout << "Funny"
                 << "\n";
        }
        else
            cout << "Not Funny"
                 << "\n";
    }
    return 0;
}