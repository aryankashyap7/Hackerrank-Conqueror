#include <bits/stdc++.h>
using namespace std;
int equalizeArray(vector<int> arr)
{

    int vsize = arr.size();

    int max_occourance = 0, max_count = 0;
    for (int i = 0; i < vsize; i++)
    {
        int icount = count(arr.begin(), arr.end(), arr[i]);
        if (icount > max_count)
        {
            max_count = icount;
            max_occourance = arr[i];
        }
    }
    return vsize - max_count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = equalizeArray(arr);

    cout << result;

    return 0;
}