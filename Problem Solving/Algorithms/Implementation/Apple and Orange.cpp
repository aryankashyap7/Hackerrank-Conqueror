#include <iostream>
using namespace std;

int main()
{
    int s, t, a, b, m, n, capple = 0, corange = 0, dist;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    int apples[m], oranges[n];
    for (int i = 0; i < m; i++)
    {
        cin >> apples[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> oranges[j];
    }

    for (int k = 0; k < m; k++)
    {
        dist = a + apples[k];
        if (dist >= s && dist <= t)
            capple++;
    }

    for (int l = 0; l < n; l++)
    {
        dist = b + oranges[l];
        if (dist >= s && dist <= t)
            corange++;
    }

    cout << capple << "\n";
    cout << corange << "\n";

    return 0;
}