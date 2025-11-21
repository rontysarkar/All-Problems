#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int>v(1001,0);
        for (int i = 1;i <= n;i++)
        {
            int a;
            cin >> a;
            v[a] = max(v[a],i);
        }
        ll ans = -1;
        for(int i =1 ;i<= 1000;i++)
        {
            for(int j = i;j<=1000;j++)
            {
                if(__gcd(i,j) == 1)
                {
                    if(v[i] != 0 && v[j] != 0)
                    {
                        ans = max(ans,1LL*v[i]+v[j]);
                    }
                }
            }
        }
        cout << ans << nl;

        
    }

    return 0;
}