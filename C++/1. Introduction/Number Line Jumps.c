#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases, queries, a, a1, q1;
    cin >> cases >> queries;

    vector<int> num[a];
    pair<int, int> query[queries];

    for (int i = 0; i < cases; i++)
    {
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            cin >> a1;
            num[i].push_back(a1);
        }
    }
    for (int k = 0; k < queries; k++)
    {
        cin >> query[k].first >> query[k].second;
    }

    for (int l = 0; l < queries; l++)
    {
        cout << num[query[l].first].at(query[l].second) << endl;
    }

    return 0;
}