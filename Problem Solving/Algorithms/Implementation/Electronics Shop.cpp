#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int s, n, m;
    cin >> s >> n >> m;

    vector<int> k(n), u(m);
    for (auto &e : k)
        cin >> e;
    for (auto &e : u)
        cin >> e;

    int max_spent = -1;
    for (int i = 0, j, t; i < k.size(); ++i)
    {
        for (j = 0; j < u.size(); ++j)
        {
            t = k[i] + u[j];
            if (t > max_spent && t <= s)
            {
                max_spent = t;
            }
        }
    }
    cout << max_spent << '\n';
    return 0;
}
