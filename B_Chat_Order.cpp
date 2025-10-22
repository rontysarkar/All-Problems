#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s[n];
    for (int i = 0;i < n;i++)
        cin >> s[i];


    map<string, int> mp;
    for (int i = n - 1;i >= 0;i--)
    {
        if (mp.find(s[i]) == mp.end())
        {
            mp[s[i]] = i;
        }
    }

    vector<pair<int, string>> v;
    for (auto [s, i] : mp)
    {
        v.push_back({ i,s });
    }

    sort(v.begin(), v.end());
    for (int i = v.size() - 1;i >= 0;i--)
    {
        cout << v[i].second << "\n";
    }


    return 0;
}