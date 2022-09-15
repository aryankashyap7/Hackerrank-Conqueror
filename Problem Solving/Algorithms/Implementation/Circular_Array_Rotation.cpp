// https://www.hackerrank.com/challenges/circular-array-rotation/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;
    int a[n], queries[q];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
    }

    rotate(a, a + n - k, a + n);
    for (int i = 0; i < q; i++)
    {
        cout << a[queries[i]] << endl;
    }

    return 0;
}

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    k = k % a.size();
    rotate(a.begin(), a.end() - k, a.end());

    vector<int> q;

    for (int x : queries)
    {
        q.push_back(a[x]);
    }
    return q;
}
