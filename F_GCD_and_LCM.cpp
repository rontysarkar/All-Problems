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
        int x,y,k;
        cin >> x >> y >> k;
        if(k > 10) k = 5;
        while(k--)
        {
            int gcd = __gcd(x,y);
            if(x > y)
                x = gcd;
            else
                y = gcd;
            int lcm = ((x*y)/__gcd(x,y));
            if(x > y)
                x = lcm;
            else
                y = lcm;
        }
        cout << 1LL*(x+y) << nl;
    }
    
    return 0;
}