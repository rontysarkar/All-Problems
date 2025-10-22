
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        vector<int> v(n);
        for (int i = 0;i < n;i++)
        {
            cin >> v[i];
        }
        cin >> m;
        while (m--)
        {
            map<char,int>mp1;
            map<int, char> mp;
            string s;
            cin >> s;
            if (s.size() == n)
            {
                bool isTem = true;
                for (int i = 0;i < n;i++)
                {
                    auto it1 = mp1.find(s[i]);
                    auto it = mp.find(v[i]);
                    if (it1 != mp1.end())
                    {
                        if (it1->second != v[i]) {
                            isTem = false;
                            break;
                        }

                    }
                    else if (it != mp.end()) {
                        if (it->second != s[i])
                        {
                            isTem = false;
                            break;
                        }
                    }
                    else {
                        mp1[s[i]] = v[i];
                        mp[v[i]] = s[i];
                    }
                }
                if (isTem)
                {
                    cout << "YES" << "\n";
                }
                else {
                    cout << "NO" << "\n";
                }
            }
            else {
                cout << "NO" << "\n";
            }

        }
    }
    return 0;
}









// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0;i < n;i++)
//         {
//             cin >> v[i];
//         }
//         cin >> m;
//         while (m--)
//         {
//             vector<int> fre(26, NULL);
//             map<int, char> mp;
//             string s;
//             cin >> s;
//             if (s.size() == n)
//             {
//                 bool isTem = true;
//                 for (int i = 0;i < n;i++)
//                 {
//                     auto it = mp.find(v[i]);
//                     if (fre[s[i] - 'a'] != NULL)
//                     {
//                         if (fre[s[i] - 'a'] != v[i]) {
//                             isTem = false;
//                             break;
//                         }

//                     }
//                     else if (it != mp.end()) {
//                         if (it->second != s[i])
//                         {
//                             isTem = false;
//                             break;
//                         }
//                     }
//                     else {
//                         fre[s[i] - 'a'] = v[i];
//                         mp[v[i]] = s[i];
//                     }
//                 }
//                 if (isTem)
//                 {
//                     cout << "YES" << "\n";
//                 }
//                 else {
//                     cout << "NO" << "\n";
//                 }
//             }
//             else {
//                 cout << "NO" << "\n";
//             }

//         }
//     }
//     return 0;
// }