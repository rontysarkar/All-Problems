#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<int> s;
    vector<int> v(n);
    for (int i = 0;i < n;i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0;
    int ans = 0;
    while (r < n && l < n)
    {
        auto it = s.find(v[r]);
        if (it != s.end())
        {
            int sz = s.size();
            ans = max(sz, ans);
            s.erase(v[l]);
            l++;

        }
        else {
            s.insert(v[r]);
            r++;
        }
    }
    int sz = s.size();
    ans = max(sz, ans);
    cout << ans << '\n';
    return 0;
}