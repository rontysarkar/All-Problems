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
        vector<int>v(n);
        for (int i = 0;i < n;i++)
        {
            cin >> v[i];
        }
        if (v[0] == -1)
        {
            if (v[1] == -1)
                v[0] = 0;
            else
                v[0] = v[1];
        }
        ll sum = 0;
        for (int i = 1;i < n;i++)
        {
            if(v[i] == -1)
            {
                if(sum < 0)
                {
                    v[i] = abs(sum)+v[i-1];
                }else if(sum > 0)
                {
                    int x = v[i-1] - abs(sum);
                    if(x < 0)
                    {
                        v[i] = 0;
                    }else{
                        v[i] = x;
                    }
                }else{
                    v[i] = v[i-1];
                }
            }

            sum += v[i]-v[i-1];
        }
        cout << abs(sum) << nl;
        for(int i :v)
            cout << i << " ";
        
        cout << nl;
    }

    return 0;
}