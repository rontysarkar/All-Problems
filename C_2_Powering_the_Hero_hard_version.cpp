#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        multiset<int>ml;
        long long int ans = 0;
        for (int i = 0;i < n;i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                if (!ml.empty())
                {
                    ans += *ml.rbegin();
                    ml.erase(--ml.end());
                }
            }
            else {
                ml.insert(x);
            }
        }
        cout << ans << "\n";

    }
    return 0;
}













// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc; cin >> tc;
//     while (tc--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         int cnt0 = 0;
//         for (int i = 0;i < n;i++)
//         {
//             cin >> v[i];
//             if (v[i] == 0) cnt0++;
//         }

//         multiset<int>ml;
//         int ans = 0;
//         for (int x : v)
//         {
//             if (x == 0)
//             {
//                 if (!ml.empty())
//                 {
//                     ans += *ml.rbegin();
//                     ml.erase(--ml.end());
//                 }
//             }
//             else {
//                 if (ml.size() < cnt0)
//                     ml.insert(x);
//                 else {
//                     if (x > *ml.begin()) {
//                         ml.erase(ml.begin());
//                         ml.insert(x);
//                     }
//                 }
//             }
//         }

//         cout << ans << "\n";

//     }
//     return 0;
// }