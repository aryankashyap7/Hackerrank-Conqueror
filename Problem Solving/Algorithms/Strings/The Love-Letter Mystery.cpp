#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i = 0;
        int j = s.length() - 1;
        int sol = 0;
        while (i < j)
        {
            sol += abs(s[i] - s[j]);
            ++i;
            --j;
        }
        cout << sol << "\n";
    }
    return 0;
}