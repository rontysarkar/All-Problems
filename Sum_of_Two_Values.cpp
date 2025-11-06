#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n + 1);
    for (int i = 1;i <= n;i++)
    {
        int a;
        cin >> a;
        v[i] = { a,i };
    }

    sort(v.begin(), v.end());
    int l = 1, r = n;
    bool isPos = false;
    int lpos, rpos;
    while (l < r)
    {
        if (v[l].first + v[r].first > x)
        {
            r--;
        }
        else if (v[l].first + v[r].first < x)
        {
            l++;
        }
        else if (v[l].first + v[r].first == x)
        {
            lpos = v[l].second;
            rpos = v[r].second;
            isPos = true;
            break;
        }
    }
    if (isPos)
    {
        cout << rpos << " " << lpos << "\n";
    }
    else {
        cout << "IMPOSSIBLE" << '\n';
    }


    return 0;
}