#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        long long sum = 0, cnt = 0;
        for (int i = 0;i < n;i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        v[n] = 1;

        int l = 0, r = 0, cnt0 = 0;
        while (r <= n)
        {
            if (v[r] <= 0)
            {
                if (v[r] == 0)
                    cnt0++;

                r++;
            }
            else {
                if (r - l != cnt0)
                {
                    cnt++;
                }
                cnt0 = 0;
                l = r;
                l++;
                r++;
            }
        }
        cout << sum << " " << cnt << " \n";

    }
    return 0;
}