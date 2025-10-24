#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int st;
    cin >> st;

    while (st--)
    {
        int n, m;
        string s, c;
        set<int> pos;

        cin >> n >> m;
        cin >> s;

        for (int i = 1;i <= m;i++)
        {
            int a;
            cin >> a;
            pos.insert(a);
        }
        cin >> c;
        sort(c.begin(), c.end());

        int i = 0;
        for (int x : pos)
        {
            s[x - 1] = c[i];
            i++;
        }

        cout << s << endl;

    }
    return 0;
}