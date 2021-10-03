#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int index, sum = 0, letter[26] = {0};
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            index = str[i] - 'A';
            letter[index] = 1;
        }

        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            index = str[i] - 'a';
            letter[index] = 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        sum += letter[i];
    }

    if (sum == 26)
        cout << "pangram";
    else
        cout << "not pangram";

    return 0;
}