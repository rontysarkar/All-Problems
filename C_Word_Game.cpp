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
        int n = 3, m;
        cin >> m;
        map<string, vector<int>> mp;

        for (int i = 0;i < n;i++)
        {
            for (int j = 0;j < m;j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        vector<int> ans(3);

        for (auto [s, v] : mp)
        {
            if (v.size() == 1)
            {
                ans[v[0]] += 3;
            }
            else if (v.size() == 2)
            {
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }

        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}