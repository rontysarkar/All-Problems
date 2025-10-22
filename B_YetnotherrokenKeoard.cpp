#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<pair<int, char>> uv, lv;
        for (int i = 0;i < s.size();i++)
        {
            char c = s[i];
            if (!uv.empty() && c == 'B')
                uv.pop_back();
            else if (!lv.empty() && c == 'b')
                lv.pop_back();
            else if (c >= 'A' && c <= 'Z' && c != 'B')
                uv.push_back({ i,c });
            else if (c >= 'a' && c <= 'z' && c != 'b')
                lv.push_back({ i,c });

        }

        vector<pair<int, char>> ans;
        for (auto p : uv)
            ans.push_back(p);
        for (auto p : lv)
            ans.push_back(p);

        sort(ans.begin(), ans.end());

        for (auto [i, c] : ans)
        {
            cout << c;
        }
        cout << "\n";
    }

    return 0;
}