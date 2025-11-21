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
        string s;
        cin >> n >> s;
        for (int i = 0;i < n;i++)
        {
            if (s[i] == '1')
            {
                if (i > 0 && s[i - 1] == '0')
                {
                    s[i - 1] = '*';
                }
                else if (i < n - 1 && s[i + 1] == '0')
                {
                    s[i + 1] = '*';
                }
            }
        }
        bool ok = true;
        for (char c : s)
        {
            if (c == '0')
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}