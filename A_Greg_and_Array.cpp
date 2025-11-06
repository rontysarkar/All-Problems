#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<ll>v(n + 2), change(n + 2, 0), query_change(m + 2, 0);
    vector<pair<pair<ll, ll>, ll>> query(m + 2);
    for (int i = 1;i <= n;i++)
        cin >> v[i];

    for (int i = 1;i <= m;i++)
    {
        int l, r, d;
        cin >> l >> r >> d;
        query[i] = { {l,r},d };
    }

    while (k--)
    {
        int x, y;
        cin >> x >> y;
        query_change[x]++;
        query_change[y + 1]--;
    }

    ll cnt = 0;
    for (int i = 1;i <= m;i++)
    {
        cnt += query_change[i];
        change[query[i].first.first] += query[i].second * cnt;
        change[query[i].first.second + 1] -= query[i].second * cnt;
    }

    for (int i = 1;i <= n;i++)
    {
        change[i] = change[i - 1] + change[i];
        v[i] += change[i];
        cout << v[i] << ' ';
    }

    return 0;
}








