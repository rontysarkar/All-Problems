#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        ll ans = (n+n)-2;
        ll x1 = (x+y)-1;
        if(x1 > n)
        {
            x1 = n-(x1-n);
        }
        ans += x1-1;
        ll left,right;
        left = min(x,y) - 1;
        right = n-max(x,y);
        ans += left+right;
        cout << ans << nl;
    }
    
    return 0;
}