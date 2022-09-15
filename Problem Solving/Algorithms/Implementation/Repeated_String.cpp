#include <bits/stdc++.h>
using namespace std;
long repeatedString(string s, long n)
{

    long sl = s.length();
    long ca = count(s.begin(), s.end(), 'a');

    long r = n / sl;

    long count_total = r * ca;
    // cout << "count_total=" << count_total << endl;
    if (r * sl < n)
    {
        n = n - r * sl;
        // cout << "n=" << n << endl;
        // cout << "r*ca=" << r << " " << ca << endl;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                count_total++;
        }
    }
    return count_total;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    long n;
    cin >> s >> n;

    cout << repeatedString(s, n) << endl;

    return 0;
}