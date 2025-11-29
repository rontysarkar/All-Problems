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
        int msb = __lg(n);
        ll ans = 0;
        for(int i =msb;i >= 0;i--)
        {
            ans += ((n >> i)&1);
        }
        if(ans % 2 == 0)
            cout << "EVEN" << nl;
        else
            cout << "ODD" << nl;
    }
    
    return 0;
}