#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        int msb = 0;
        for (int i = 0;i < n;i++)
        {
            cin >> v[i];
            msb = max(msb, __lg(v[i]));
        }
        ll mx = 0;
        for (int i = 0;i <= msb;i++)
        {
            mx += (1 << i);
        }
        int res = -1;
        for (int i = mx;i >= 0;i--)
        {
            int ans = (v[0] ^ i);
            for (int j = 1;j < n;j++)
            {
                ans = (ans ^ (v[j] ^ i));
            }
            if (ans == 0)
            {
                res = i;
                break;
            }
        }
        cout << res << nl;
    }

    return 0;
}