#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while (tc--)
    {
        int n; cin >> n;
        vector<int>v(n);
        multiset<int> ml;
        for (int i = 0;i < n;i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        sort(v.begin(), v.end());
        for (int x : v)
        {
            auto it = ml.find(x);
            if (it != ml.end())
            {
                ml.erase(it);
                ml.insert(x + 1);
            }
            else {
                ml.insert(x + 1);
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}