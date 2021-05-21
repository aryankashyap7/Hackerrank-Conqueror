#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;
    long int candles[num];
    int tcandles = sizeof(candles) / sizeof(candles[0]);
    for (int i = 0; i < tcandles; i++)
    {
        cin >> candles[i];
    }

    //tcandles refer to total number of candles
    sort(candles, candles + tcandles);
    int temp = candles[tcandles - 1];

    int count = 0;
    for (int j = 0; j < tcandles; j++)
    {
        if (temp == candles[j])
            count++;
    }
    cout << count;
    return 0;
}