#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float spos = 0, sneg = 0, szero = 0;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];

        if (num[i] > 0)
            spos++;
        else if (num[i] < 0)
            sneg++;
        else
            szero++;
    }
        cout << setprecision(6) << fixed << spos / n << "\n";
        cout << setprecision(6) << fixed << sneg / n << "\n";
        cout << setprecision(6) << fixed << szero / n << "\n";
        return 0;
    
}
















