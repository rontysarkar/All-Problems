
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    
    
    return 0;
}




























// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     multimap<int, vector<int>>mp;
//     while (n--)
//     {
//         int x;
//         cin >> x;
//         auto it = mp.upper_bound(x);
//         while (it != mp.end()) {
//             if (*it->second.rbegin() > x)
//             {
//                 it->second.push_back(x);
//                 break;
//             }
//             else {
//                 it = mp.upper_bound(it->first);
//             }
//         }
//         if (it == mp.end())
//         {
//             mp.insert({ x,{x} });
//         }
//     }
//     cout << mp.size() << "\n";
//     return 0;
// }