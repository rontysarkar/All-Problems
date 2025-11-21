#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

bool isPrime(ll n)
{
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (ll i = 3;i <= n / i;i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        if (n < 3)
        {
            cout << 6 << endl;
        }
        else {
            if (n % 2 == 0)
            {
                n++;
            }
            while (!isPrime(n)) n += 2;
            ll prime1 = n;
            n += 2;
            while (!isPrime(n)) n += 2;
            ll prime2 = n;
            cout << 1LL * prime1 * prime2 << endl;
        }
    }

    return 0;
}