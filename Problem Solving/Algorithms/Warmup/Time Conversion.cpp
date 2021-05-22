#include <bits/stdc++.h>
using namespace std;
int main()
{

    int h, m, s;
    string str;
    char r;
    cin >> h >> r >> m >> r >> s >> str;
    if (str == "PM" && h != 12)
        h = h + 12;
    else if (str == "AM" && h == 12)
        h = (h + 12) % 24;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}