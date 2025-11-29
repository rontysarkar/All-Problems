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
        int bit = INT_MAX;
        for(int i = 0;i<n;i++)
        {
            int x;
            cin >> x;
            bit &= x;
        }
        ll ans = 0;
        int pos = 1;
        if((bit >> 0)&1) ans += 1;
        while(bit)
        {
            if((bit >> 1)&1)
            {
                ans += (1 << pos);
            }
            pos++;
            bit /= 2;
        }
        cout << ans << nl;
        
        

    }
    
    return 0;
}