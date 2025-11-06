#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n,k;
    cin >> n >> k;
    map<ll,ll> m;
    m[0] = 1;
    ll ans =0,prefix_sum = 0;
    for(int i =0;i<n;i++)
    {
        int a;
        cin >> a;
        prefix_sum += a;
        if(m.count(prefix_sum-k))
        {
            ans += m[prefix_sum-k];
            m[prefix_sum]++;

        }else{
            m[prefix_sum]++;
        }

    }

    cout << ans << '\n'; 
    return 0;
}