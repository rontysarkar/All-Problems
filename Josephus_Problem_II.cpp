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
    int n,k;
    cin >> n >> k;
    pbds<int>p;
    for(int i =1;i<=n;i++)
        p.insert(i);
   
    int idx = k%n;
    while(n--)
    {
        auto it = p.find_by_order(idx);
        cout << *it << ' ';
        p.erase(it);

        if(n) idx = (idx+k)%n;
    }

    return 0;
}