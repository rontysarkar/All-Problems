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
        string s;
        cin >> n >> s;
        ll ans = 1,pair = 0;
        for(int i=1;i<n;i++)
        {
            if(s[i] != s[i-1])
            {
                ans++;
            }
            if(s[i] == s[i-1])
             pair++;
        }
        if(pair == 0) ans--;
        cout << ans << nl;
        
    }
    
    return 0;
}