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
        vector<int> v(n + 1);
        ll sum = 0;
        for (int i = 1;i <= n;i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        double avg = (double)sum / n;
        int ans;
        bool ok = false;
        for (int i = 1;i <= n;i++)
        {
            double newAvg = (sum - v[i]) * 1.0 / (n - 1);
            if (newAvg == avg)
            {
                ans = i;
                ok = true;
                break;
            }
        }
        if (ok)
        {
            cout << ans << nl;
        }
        else {
            cout << "Impossible" << nl;
        }
    }

    return 0;
}