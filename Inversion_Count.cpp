#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for (int i = 0;i < n;i++)
            cin >> v[i];

        pbds<int>p;
        long long ans = 0;
        for (int i =n-1;i >= 0;i--)
        {
            ans += p.order_of_key(v[i]);
            p.insert(v[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}