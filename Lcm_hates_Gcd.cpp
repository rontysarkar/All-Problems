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
        ll a, b;
        cin >> a >> b;
        if (b % a == 0)
        {
            ll x = b;
            ll lcm = (a * x) / __gcd(a, x);
            cout << lcm - __gcd(b, x) << endl;
        }
        else {
            ll x = __gcd(a, b);
            ll lcm = (a * x) / (__gcd(a, x));
            ll gcd = __gcd(b, x);
            cout << lcm - gcd << endl;
        }

    }
    return 0;
}