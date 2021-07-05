#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin >> cases;
    while (cases--)
    {
        int c1, c2, m;
        cin >> c1 >> c2 >> m;
        if (abs(m - c1) > abs(m - c2))
            cout << "Cat B"
                 << "\n";
        else if (abs(m - c1) < abs(m - c2))
            cout << "Cat A"
                 << "\n";
        else
            cout << "Mouse C"
                 << "\n";
    }
    return 0;
}