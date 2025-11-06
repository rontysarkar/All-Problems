#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0,r =0,ans = INT_MAX,sum = 0;
        while(r < n)
        {
            if(s[r] == 'W')
                sum++;
            if(r - l + 1 == k)
            {
                ans = min(ans,sum);
                if(s[l] == 'W')
                    sum--;
                
                l++;
                r++;
            }else{
                r++;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}