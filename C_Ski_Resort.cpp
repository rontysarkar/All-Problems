#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int>v(n);
    for (int i = 0;i < n;i++) cin >> v[i];

    ll ans = 0;
    int l = 0, r = 0;
    while(r < n)
    {
        if(v[r] > q)
        {
            l = r;
            l++;
            r++;
        }else{
            if(r - l+1 >= k)
            {
                ans += ((r-l+1)-k)+1;
            }
            r++;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}