#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int>mp;
    for (int i = 0;i < n;i++) cin >> v[i];

    int l = 0, r = 0;
    ll ans = 0, cnt = 0;

    auto it = mp.find(2);
    


    while (r < n)
    {
        mp[v[r]]++;
        if (mp[v[r]] == 1)
            cnt++;
        while (cnt > k)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
                cnt--;
            l++;
        }

        if (cnt <= k)
            ans += r - l + 1;

        r++;
    }
    cout << ans << '\n';
    return 0;
}