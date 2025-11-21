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
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll mn = v[0];
        ll gcd = 0;
        for (int i = 1;i < n;i++)
        {
            if (v[i] % mn == 0)
            {
                gcd = __gcd(gcd, v[i]);
            }
        }
        if (mn == gcd)
        {
            cout << "Yes" << endl;

        }
        else {
            cout << "No" << endl;
        }

    }

    return 0;
}