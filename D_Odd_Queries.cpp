#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n), pref(n + 1, 0);
    for (int i = 0;i < n;i++)
    {
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
    }


    while (q--)
    {
        ll int sum = pref[n];
        int l, r, k;
        cin >> l >> r >> k;
        sum -= pref[r] - pref[l - 1];
        sum += (r - l + 1) * k;
        if (sum % 2 != 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';

    }

}


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve()
{
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    
    return 0;
}







