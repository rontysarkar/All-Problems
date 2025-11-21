#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    ll x;
    cin >> n >> x;
    vector<int> v(n+1);
    for(int i =1;i<=n;i++) cin >> v[i];

    int l=1,r=1;
    ll ans =0,sum =0;
    sum += v[r];
    while(r<=n)
    {
        if(sum >= x)
        {
            ans++;
            ans += n-r;
            sum -= v[l];
            l++;
        }else{
            r++;
            sum += v[r];
        }
    }
    cout << ans << '\n';
    
    return 0;
}