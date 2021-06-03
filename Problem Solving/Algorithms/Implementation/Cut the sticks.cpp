#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    // Corner case
    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    for (int arr_i = 0; arr_i < n; arr_i++)
    {
        cin >> arr[arr_i];
    }
    sort(arr.begin(), arr.end());
    int count = 1;
    cout << n << "\n";
    int tmp = n;
    for (int arr_i = 1; arr_i < n; arr_i++)
    {
        if (arr[arr_i] != arr[arr_i - 1])
        {
            tmp -= count;
            cout << tmp << "\n";
            count = 1;
        }
        else
        {
            count++;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int cases;
//     cin >> cases;
//     int ele[cases];

//     for (int i = 0; i < cases; i++)
//     {
//         cin >> ele[i];
//     }

//     int min = *min_element(ele, ele + cases);
//     int max = *max_element(ele, ele + cases);
//     while (max > 0)
//     {
//         int count = 0;

//         for (int j = 0; j < cases; j++)
//         {
//             if (ele[j] > 0)
//             {
//                 count++;
//             }
//             ele[j] -= min;

//         }
//         if (count != 0)
//             cout << count << "\n";
//         max = *max_element(ele, ele + cases);
//     }

//     return 0;
// }