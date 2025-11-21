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
        ll a, b, n;
        cin >> a >> b >> n;
        ll ans = 0;
        if (a == b)
        {
            cout << -1 << nl;
            continue;
        }
        ll y = (n / a) + 1;
        if (__gcd(a, b) == b)
        {
            cout << -1 << nl;
        }
        else {

            while (1)
            {
                ll ans = y * a;
                if (ans % b != 0 && ans >= n)
                {
                    cout << ans << nl;
                    break;
                }
                else {
                    y++;
                }
            }
        }



    }
    return 0;
}