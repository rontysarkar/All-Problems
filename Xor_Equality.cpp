#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const ll MOD = 1000000007;

ll power(ll a, ll b) {
    ll res = 1;

    while(b > 0) {
        if(b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        ll ans = power(2,n-1);
        cout << ans << nl; 
    }
    
    return 0;
}