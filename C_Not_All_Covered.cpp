#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector<ll> diff(n+2,0),PrefixSum(n+2,0);
    while(m--)
    {
        int l,r;
        cin >> l >> r;
        diff[l]++;
        diff[r+1]--;
    }
    ll ans = INT_MAX;
    for(int i =1;i<=n;i++)
    {
        PrefixSum[i] = PrefixSum[i-1] + diff[i];
        ll sum = PrefixSum[i];
        ans = min(sum,ans);
    }
    cout << ans << "\n";
    return 0;
}