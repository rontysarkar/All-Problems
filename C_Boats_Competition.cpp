#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n;i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int ans = 0;

    for (int i = 2;i < 101;i++)
    {
        int l = 0, r = n - 1, cnt = 0;

        while (l < r)
        {
            if (v[l] + v[r] == i)
            {
                cnt++;
                r--;
                l++;
            }
            else if (v[l] + v[r] < i)
            {
                l++;
            }
            else
                r--;
        }
        ans = max(ans, cnt);
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