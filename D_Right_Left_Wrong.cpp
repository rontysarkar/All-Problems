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
        int n;
        string s;
        cin >> n;
        vector<int>v(n);
        long long int sum = 0,ans = 0;
        for(int i =0;i<n;i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        cin >> s;
        
        int l = 0, r = n-1;
        while(l < r)
        {
            if(s[l] == 'L' && s[r] == 'R')
            {
                ans += sum;
                sum -= v[l] + v[r];
                l++;
                r--;
            }else if(s[l] != 'L')
            {
                sum -= v[l];
                l++;
            }else if(s[r] != 'R')
            {
                sum -= v[r];
                r--;
            }
        }
        
        
        cout << ans << "\n";
    }
    return 0;
}   