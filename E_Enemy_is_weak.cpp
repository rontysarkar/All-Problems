#include<bits/stdc++.h>
using namespace std;
#define ll long long

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// ordered_set ms
// ms.order_of_key(k) ~~ Number of items strictly smaller than k .
// ms.find_by_order(k); ~~ K-th iterator in a set (counting from zero).

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    vector<int>v(n),inv(n);
    pbds<int>p1,p2;
    for(int i =0;i<n;i++)
        cin >> v[i];
    
    ll ans =0;
    for(int i =n-1;i>=0;i--)
    {
        int x = p1.order_of_key(v[i]);
        inv[i] = x;
        p1.insert(v[i]);
    }

    cout << endl;
    for(int i =0;i<n;i++)
    {
        int lesVale = p2.order_of_key(v[i]);
        int big_vlaue = p2.size() - lesVale;
        ans += (1LL *inv[i]*big_vlaue);
        p2.insert(v[i]);
    }
    cout << ans << endl;
    return 0;
}