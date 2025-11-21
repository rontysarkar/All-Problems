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
    vector<int> v(n);
    for(int i =0;i<n;i++)
        cin >> v[i];

    pbds<pair<int,int>> p;
    int l =0,r=0,ans = 0;
    bool ok = true;
    while(r < n)
    {
        p.insert({v[r],r});
        if(r-l+1 == k)
        {
            int pos = (k-1)/2;
            auto it = p.find_by_order(pos);
            if(ok)
            {
                for(int i =0;i<k;i++)
                {
                    ans += abs(it->first - v[i]);
                }
                ok = false;
            }else{
                ans -= abs(v[l]-it->first);
            }
        }else{
            r++;
        }
    }
    cout << ans;
    

    return 0;
}   