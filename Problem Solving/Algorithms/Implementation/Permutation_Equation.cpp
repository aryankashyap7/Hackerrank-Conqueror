#include <bits/stdc++.h>
using namespace std;
vector<int> permutationEquation(vector<int> p)
{
    // cout << "p.size()=" << p.size() << endl;
    vector<int> q;
    for (int x = 1; x <= p.size(); x++)
    {
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] == x)
            {
                // cout << "x=" << x << ", i=" << i << ", p[i]=" << p[i]<< endl;
                q.push_back(i + 1);
                break;
            }
        }
    }

    vector<int> r;
    for (int x : q)
    {
        for (int i = 0; i < q.size(); i++)
        {
            if (p[i] == x)
            {
                r.push_back(i + 1);
                break;
            }
        }
    }

    return r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    vector<int> result = permutationEquation(p);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}