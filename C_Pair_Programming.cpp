#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve()
{
    int k,n,m;
    cin >> k >> n >>  m;
    vector<int> a(n),b(m);
    for(int i =0;i<n;i++) cin >> a[i];
    for(int i =0;i<m;i++) cin >> b[i];

    vector<int> ans;
    int i =0, j =0;
    bool ok = true;
    while(i < n || j < m)
    {
        bool tmp = false;
        if(i < n && a[i] == 0)
        {
            ans.push_back(0);
            i++;
            k++;
            tmp = true;
        }else if(j < m && b[j] == 0)
        {
            ans.push_back(0);
            j++;
            k++;
            tmp = true;
        }else if(i < n && a[i] <= k)
        {
            ans.push_back(a[i]);
            i++;
            tmp = true;
        }else if(j < m && b[j] <= k)
        {
            ans.push_back(b[j]);
            j++;
            tmp = true;
        }
        if(!tmp){
            ok = false;
            break;
        }
    }

    if(!ok)
        cout << -1 << nl;
    else{
        for(int x :ans)
            cout << x << ' ';
        
        cout << nl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    
    return 0;
}

































// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void solve()
// {
//     int k, n, m;
//     cin >> k >> n >> m;
//     vector<int>a(n), b(m), ans;
//     for (int i = 0;i < n;i++)
//         cin >> a[i];
//     for (int i = 0;i < m;i++)
//         cin >> b[i];

//     int l = 0, j = 0;
//     while (l < n)
//     {
//         if (a[l] == 0)
//         {
//             ans.push_back(0);
//             l++;
//             k++;
//         }
//         else if (a[l] > 0 && a[l] <= k)
//         {
//             ans.push_back(a[l]);
//             l++;
//         }

//         if (j < m && b[j] == 0)
//         {
//             ans.push_back(b[j]);
//             j++;
//             k++;
//         }
//         else if (j < m && b[j] > 0 && b[j] <= k)
//         {
//             ans.push_back(b[j]);
//             j++;
//         }

//         if(j < m && a[l] > k && b[j] > k)
//             break;
//         if(m <= j && a[l] > k)
//             break;
        
//     }
//     while (j < m)
//     {
//         if (b[j] == 0)
//         {
//             ans.push_back(b[j]);
//             j++;
//             k++;
//         }
//         else if (b[j] > 0 && b[j] <= k)
//         {
//             ans.push_back(b[j]);
//             j++;
//         }
//         else {
//             break;
//         }
//     }
//     if (ans.size() == n + m)
//     {
//         for (int x : ans)
//             cout << x << " ";
        
//         cout << '\n';
//     }
//     else {
//         cout << -1 << '\n';
//     }

// }

// int main() {
//     ios_base::sync_with_stdio(0); cin.tie(0);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         solve();
//     }

//     return 0;
// }