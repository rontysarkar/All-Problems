#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n,x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i =0;i<n;i++) cin >> v[i];
    ll l =0,r=0,sum =0,ans = LLONG_MAX;
    sum += v[r];
    while(r < n)
    {
        if(sum >= x)
        {
            ans = min(ans,r-l+1);
            sum -= v[l];
            l++;
        }else{
            r++;
            if(r < n ) sum += v[r];
        }
    }

    if(ans == LLONG_MAX)
        cout << -1 << '\n';
    else{
        cout << ans << '\n';
    }
    return 0;
}