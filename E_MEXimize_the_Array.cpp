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
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i =0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        ll ans = 0;
        for(int i = 0;i<n;i++)
        {
            ans += abs(v[i]-i);
        }
        cout << ans << nl;
    }
    
    return 0;
}