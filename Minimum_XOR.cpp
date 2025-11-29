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
        for (int i = 0;i < n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = v[0];
        for (int i = 1;i < n;i++)
        {
            ans = (ans ^ v[i]);
        }
        ll mn = ans;
        for (int i = 0;i < n;i++)
        {
            mn = min(mn, (v[i] ^ ans));
        }
        cout << mn << nl;
    }

    return 0;
}