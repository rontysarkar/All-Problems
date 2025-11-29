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
        int ans = 0;
        for(int i = 2;i<n;i += 2)
        {
            if(n-i >= 2)
            {
                ans += (n-i)-1;
            }
        }
        cout << ans << nl;
    }
    
    return 0;
}