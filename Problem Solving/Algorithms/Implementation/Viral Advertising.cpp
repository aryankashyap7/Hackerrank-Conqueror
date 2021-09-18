#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, s = 5, l = 0, c = 0, liked = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        liked = s / 2;
        c += liked;
        s = liked * 3;
    }

    cout << c;
    return 0;
}