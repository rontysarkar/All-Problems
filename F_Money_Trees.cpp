#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int>a(n), h(n);
    for (int i = 0;i < n;i++) cin >> a[i];
    for (int i = 0;i < n;i++) cin >> h[i];

    ll maxLen = 0, sum = 0, l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];

        while (sum > k)
        {
            sum -= a[l];
            l++;
        }

        while (l < r && h[r - 1] % h[r] != 0)
        {
            sum -= a[l];
            l++;
        }

        maxLen = max(maxLen, r - l + 1);
        r++;
    }

    cout << maxLen << '\n';

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