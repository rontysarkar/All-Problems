#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    ll x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i =0;i<n;i++) cin >> v[i];

    ll l=0,r=0,ans =0,sum =0;
    sum += v[r];
    while(r < n)
    {
        if(sum <= x)
        {
            ans += r-l+1;
            r++;
            sum += v[r];
        }else{
            sum -= v[l];
            l++;
        }
    }
    cout << ans << '\n';
    return 0;
}