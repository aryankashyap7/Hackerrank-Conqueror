#include <bits/stdc++.h>
using namespace std;
int jumpingOnClouds(vector<int> c)
{
    int count = 0;

    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == 0)
        {
            if (c[i + 2] == 0)
            {
                count++;
                i++;
            }
            else if (c[i + 1] == 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int result = jumpingOnClouds(c);

    cout << result;
    return 0;
}