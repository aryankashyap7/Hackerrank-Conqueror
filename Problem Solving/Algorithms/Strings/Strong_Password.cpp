#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dummy;
    string s;
    int upper = 0, lower = 0, symbol = 0, digit = 0, length = 0, kitnehai = 0, kitnegayab = 0, khali_jagah = 0;
    cin >> dummy;
    cin >> s;
    for (int i = 0; i < dummy; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper = 1;
        else if (s[i] >= 'a' && s[i] <= 'z')
            lower = 1;
        else if (s[i] >= '0' && s[i] <= '9')
            digit = 1;
        else
            symbol = 1;
    }
    kitnehai = lower + upper + digit + symbol;
    kitnegayab = 4 - kitnehai;
    khali_jagah = 6 - dummy;
    // cout << lower << "\n";
    // cout << upper << "\n";
    // cout << digit << "\n";
    // cout << symbol << "\n";
    // cout << kitnehai << "\n";
    // cout << kitnegayab << "\n";
    // cout << khali_jagah << "\n";

    if (dummy >= 6)
    {
        cout << kitnegayab;
    }
    else

    {
        if (kitnegayab == 0)
            cout << khali_jagah;
        else if (khali_jagah >= kitnegayab)
            cout << khali_jagah;
        else
            cout << kitnegayab;
    }
    return 0;
}
