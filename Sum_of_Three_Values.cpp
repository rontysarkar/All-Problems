#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>>v(n + 1);
    for (int i = 1;i <= n;i++)
    {
        int a;
        cin >> a;
        v[i] = { a,i };
    }
    sort(v.begin(), v.end());

    set<int> s;
    bool isPos = false;
    for (int i = 1;i < n - 1 && !isPos;i++)
    {
        int l = i + 1, r = n;

        while (l < r)
        {
            if (v[i].first + v[l].first + v[r].first > x)
                r--;
            else if (v[i].first + v[l].first + v[r].first < x)
                l++;
            else if (v[i].first + v[l].first + v[r].first == x) {
                isPos = true;
                s.insert(v[i].second);
                s.insert(v[l].second);
                s.insert(v[r].second);
                break;
            }
        }
    }

    if (isPos)
    {
        for (int i : s)
            cout << i << " ";

        cout << '\n';
    }
    else
        cout << "IMPOSSIBLE" << '\n';
    return 0;
}