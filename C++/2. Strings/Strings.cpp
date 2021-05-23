#include <iostream>
using namespace std;

int main()
{
    string f, s;
    char temp;
    cin >> f;
    cin >> s;
    cout << f.size() << " " << s.size() << endl;
    cout << f + s << endl;
    temp = f[0];
    f[0] = s[0];
    s[0] = temp;
    cout << f << " " << s;

    return 0;
}