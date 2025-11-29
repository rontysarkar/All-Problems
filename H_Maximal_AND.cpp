#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    const int bit = 30;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n), bits(31, 0);
        for (int i = 0;i < n;i++)
        {
            cin >> v[i];
        }

        for (int i = 0;i < n;i++)
        {
            for (int j = bit;j >= 0;j--)
            {
                if ((v[i] >> j) & 1) {
                    bits[j]++;
                }
            }
        }
        ll ans = 0;
        for (int i = bit;i >= 0;i--)
        {
            if (bits[i] == n)
            {
                ans += (1LL << i);
            }
            else {
                int remin = n - bits[i];
                if (k >= remin)
                {
                    ans += (1LL << i);
                    k -= remin;
                }
            }
        }
        cout << ans << nl;
    }

    return 0;
}

//    16 8 4 2 1
// 4 > 0 0 1 0 0 04662866126126126
// 6 > 0 0 1 1 0 
// 6 > 0 0 1 1 0 
// 28> 1 1 1 0 0 
// 6 > 0 0 1 1 0 
// 6 > 0 0 1 1 0 
// 12> 0 1 1 0 0 