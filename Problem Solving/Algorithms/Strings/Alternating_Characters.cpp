#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        int ans = 0;
        for (int i = 0 ; i < str.length() - 1; i++) {
            if (str[i] == str[i + 1]) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}