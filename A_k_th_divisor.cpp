#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n, k;
    vector<ll>v;
    cin >> n >> k;
    for (ll i = 1;i * i <= n;i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
    }
    if (v.size() < k) {
        cout << -1 << '\n';
    }
    else {
        sort(v.begin(), v.end());
        cout << v[k - 1] << '\n';
    }
    return 0;
}