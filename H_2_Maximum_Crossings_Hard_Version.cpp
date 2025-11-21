#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// ordered_set ms
// ms.order_of_key(k) ~~ Number of items strictly smaller than k .
// ms.find_by_order(k); ~~ K-th iterator in a set (counting from zero).

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<ll>v(n);
        pbds<ll> s;
        ll ans = 0;
        for (int i = 0;i < n;i++) cin >> v[i];

        for (int i = n - 1;i >= 0;i--)
        {
            ans += s.order_of_key(v[i] + 1LL);
            s.insert(v[i]);
        }

        cout << ans << endl;
    }

    return 0;
}