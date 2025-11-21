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
        int n, k;
        string s;
        cin >> n >> k >> s;
        if (n > 1 && s[0] == 'I') s[0] = s[1];
        char l = s[0];
        char r = s[n - 1];
        for (int i = 1;i < n;i++)
        {
            if (s[i] == 'I')
            {
                s[i] = s[i - 1];
            }
        }
        ll ans = 0;
        for (int i = 1;i < n;i++)
        {
            if (s[i] == s[i - 1]) ans++;
        }
        ans = ans * k;
        bool ok;
        if (l != 'I' && r != 'I')
        {
            if (l == r)
                ok = true;
            else
                ok = false;

        }
        else {
            ok = false;
        }

        if (ok)
            ans += k - 1;


        cout << ans << endl;
    }

    return 0;
}