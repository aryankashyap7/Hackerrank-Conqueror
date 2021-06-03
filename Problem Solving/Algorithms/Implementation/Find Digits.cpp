#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int N;
        cin >> N;
        int tmp = N, cnt = 0;
        while (tmp != 0)
        {
            int r = tmp % 10;
            if (r != 0 && N % r == 0)
                cnt++;
            tmp /= 10;
        }
        cout << cnt << endl;
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

//     while (cases--)
//     {
//         string s;
//         cin >> s;
//         long long int temp, rem, count = 0;
//         temp = stoi(s);
//         for (int i = 0; i < s.size(); i++)
//         {
//             rem = temp % 10;
//             temp /= 10;
//             if ((stoi(s) % rem) == 0)
//             {
//                 count++;
//             }
//         }

//         cout << count << "\n";
//     }
//     return 0;
// }

// # cases=int(input())
// # for i in range(cases):
// #     s=input()
// #     count=0
// #     for j in s:
// #         if(int(s)%int(j)==0):
// #             count+=1
// #     print(count)
