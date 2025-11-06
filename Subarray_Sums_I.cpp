
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,x;
    cin >> n >> x;
    vector<int> v(n+1);
    vector<int> prefix(n+1);
    for(int i =1;i<=n;i++)
    {
        cin >> v[i];
    }

    for(int i =1;i<=n;i++)
    {
        prefix[i] = prefix[i-1]+v[i];
    }

    int l = 1,r=1,ans = 0;
    while(r <= n)
    {
        if(prefix[r]-prefix[l-1] < x)
            r++;
        else if(prefix[r] -prefix[l-1] > x)
        {
            l++;
        }else if(prefix[r] - prefix[l-1] == x)
        {
            ans++;
            l++;
            r++;
        }
    }
    cout << ans << '\n';

    
    return 0;
}































// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long int n,x;
//     cin >> n >> x;
//     vector<int> v(n+1);
//     for(int i =0;i<n;i++)
//     {
//         cin >> v[i];
//     }
//     v[n] = 0;
   
//     long long sum = 0;
//     int l =0,r=0,ans = 0;
//     sum += v[0];

//     while(r <n)
//     {
//         if(sum < x)
//         {
//             r++;
//             sum += v[r];
//         }else if(sum > x)
//         {
//             sum -= v[l];
//             if(l == r)
//             {
//                 l++;
//                 r++;
//                 sum += v[r];
//             }else{
//                 l++;
//             }
            
//         }else if(sum == x)
//         {
//             ans++;
//             sum -= v[l];
//             l++;
//             r++;
//             sum += v[r];
//         }
    
//     }
//     cout << ans << '\n';
//     return 0;
// }