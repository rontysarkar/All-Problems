#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int>b(n - 1), a(n);
        for (int i = 0;i < n - 1;i++)
        {
            cin >> b[i];
        }
        a[0] = *b.begin();
        a[n - 1] = *--b.end();
        bool ok = true;
        for (int i = 1;i < n - 1;i++)
        {
            a[i] = (b[i - 1] | b[i]);
            if ((a[i - 1] & a[i]) != b[i - 1]) {
                ok = false;
            }
        }
        if ((a[n - 1] & a[n - 2]) != b[n - 2]) {
            ok = false;
        }
        if (ok)
        {
            for (int i : a)
                cout << i << " ";
            cout << nl;
        }
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}