#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    multiset<ll> ml;
    for(int i =0;i<n;i++) cin >> v[i];

    int l=0,r=0;
    ll ans = 0;
    ml.insert(v[r]);
    while(r < n)
    {
        if(*ml.rbegin() - *ml.begin() <= k)
        {
            ans += r-l+1;
            r++;
            ml.insert(v[r]);
        }else{
            ml.erase(ml.find(v[l]));
            l++;
        }
    }
    cout << ans << '\n';
    return 0;
}