#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        vector<pair<int, int>>v;
        for (int i = 0;i < n;i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({ a,b });
        }
        sort(v.rbegin(), v.rend());
        pbds<int>p;
        ll ans = 0;
        for (int i = 0;i < n;i++)
        {
            ans += p.order_of_key(v[i].second);
            p.insert(v[i].second);
        }
        cout << ans << endl;
    }

    return 0;
}