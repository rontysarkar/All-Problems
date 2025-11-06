#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n,k;
    cin >> n >> k;
    map<int,int> freq;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }

    int l =0 ,r =0,cnt = 0;
    ll ans=0;
    while(r < n)
    {
        freq[arr[r]]++;
        if(freq[arr[r]] == 1)
            cnt++;
        while(cnt > k && l < n)
        {
            freq[arr[l]]--;
            if(freq[arr[l]] == 0)
                cnt--;
            l++;
        }
        ans += r-l+1;
        r++;
    }
    cout << ans << '\n';
    
    return 0;
}




















// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
 
// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0);
 
//     int n, k;
//     cin >> n >> k;
//     map<int, int> fre;
//     int cnt = 0;
//     ll ans = 0;
//     int a[n + 1];
//     for(int i = 1, j = 1; j <= n; j++)
//     {
//         cin >> a[j];
//         fre[a[j]]++;
//         if(fre[a[j]] == 1)
//             cnt++;
//         while(cnt > k)
//         {
//             fre[a[i]]--;
//             if(fre[a[i]] == 0)
//                 cnt--;
//             i++;
//         }
//         ans += (j - i + 1);
//     }
 
//     cout << ans << '\n';
 
 
//     return 0;
// }




