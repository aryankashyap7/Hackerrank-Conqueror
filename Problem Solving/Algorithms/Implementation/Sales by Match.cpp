#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases, count = 0;
    cin >> cases;
    multiset<int> ak;
    while (cases--)
    {
        int e;
        cin >> e;
        ak.insert(e);
    }
    set<int> s;
    for (int a : ak)
        s.insert(a);

    for (int sc : s)
    {
        count += ak.count(sc) / 2;
    }

    cout << count << "\n";
    return 0;
}