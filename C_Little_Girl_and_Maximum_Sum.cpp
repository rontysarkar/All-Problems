#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);


    int n,q;
    cin >> n >> q;
    vector<ll>v(n+2),d(n+2,0);
    for(int i =1;i<=n;i++) 
    {
        cin >> v[i];
    }
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }

    for(int i =1;i<=n;i++)
    {
        d[i] = d[i-1]+d[i];

    }
    sort(v.rbegin(),v.rend());
    sort(d.rbegin(),d.rend());
    ll sum = 0;
    for(int i =0;i<n;i++)
    {
        sum += d[i]*v[i];
    }
    cout << sum << '\n';

    return 0;
}