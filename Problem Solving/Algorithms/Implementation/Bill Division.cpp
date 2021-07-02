#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, choice, bill, tcost = 0;
    vector<int> cost;
    cin >> t >> choice;
    for (int i = 0; i < t; i++)
    {
        int e;
        cin >> e;
        cost.push_back(e);
    }
    cin >> bill;

    tcost = (accumulate(cost.begin(), cost.end(), tcost) - cost[choice]) / 2;
    if (tcost == bill)
        cout << "Bon Appetit";
    else
        cout << bill - tcost;

    return 0;
}