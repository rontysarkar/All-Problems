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
        ll l, r;
        cin >> l >> r;
        ll x = l, y = l * 2;
        if (y <= r)
        {
            cout << x << " " << y << endl;
        }
        else {
            cout << -1 << ' ' << -1 << endl;
        }

    }
    return 0;
}