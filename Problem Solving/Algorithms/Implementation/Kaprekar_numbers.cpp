#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p, q;
    cin >> p >> q;
    bool flag = 1;
    for (long long int i = p; i <= q; i++)
    {
        long long int sq = i * i;
        long long int d = to_string(i).length();
        long long int r = sq % (int)pow(10, d);
        long long int l = sq / (int)pow(10, d);
        if (r + l == i)
        {
            cout << i << " ";
            flag = 0;
        }
    }
    if (flag)
        cout << "INVALID RANGE";

    return 0;
}