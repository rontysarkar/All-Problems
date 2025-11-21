#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve()
{
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0;i < n;i++) cin >> v[i];

    ll sum = 0;
    int l = 0, r = 0, maxLen = -1;
    while (r < n)
    {
        sum += v[r];
        if (sum == s)
        {
            maxLen = max(maxLen, r - l + 1);
        }
        else {
            while (sum > s)
            {
                sum -= v[l];
                l++;
            }
        }
        r++;
    }

    if (maxLen == -1)
        cout << maxLen << '\n';
    else
        cout << n - maxLen << '\n';
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