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
        vector<ll> v(n);
        for (int i = 0;i < n;i++)
            cin >> v[i];

        ll gcd1 = 0, gcd2 = 0;
        bool ok1 = true, ok2 = true;
        for (int i = 0;i < n;i++)
        {
            if (i % 2 == 0)
            {
                gcd1 = __gcd(gcd1, v[i]);
            }
            else {
                gcd2 = __gcd(gcd2, v[i]);
            }
        }

        for (int i = 0;i < n;i++)
        {
            if (i % 2 == 0)
            {
                // gcd1 = __gcd(gcd1,v[i]);
                if (v[i] % gcd2 == 0) ok2 = false;
            }
            else {
                // gcd2 = __gcd(gcd2,v[i]);
                if (v[i] % gcd1 == 0) ok1 = false;
            }
        }

        if (ok1)
        {
            cout << gcd1 << '\n';
        }
        else if (ok2)
        {
            cout << gcd2 << '\n';
        }
        else {
            cout << 0 << endl;
        }

    }

    return 0;
}