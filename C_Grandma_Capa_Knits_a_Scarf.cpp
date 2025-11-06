#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mn = INT_MAX;
    for (int i = 'a';i <= 'z';i++)
    {
        int l = 0, r = n - 1, cnt = 0;
        while (l <= r)
        {
            if (s[l] != s[r])
            {
                if (s[l] == i)
                {
                    l++;
                    cnt++;
                }
                else if (s[r] == i)
                {
                    r--;
                    cnt++;
                }
                else {
                    cnt = INT_MAX;
                    break;
                }
            }
            else {
                l++;
                r--;
            }
        }
        mn = min(mn, cnt);
    }
    if (mn != INT_MAX)
        cout << mn << '\n';
    else
        cout << -1 << nl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}