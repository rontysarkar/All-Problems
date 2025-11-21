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
        int l, r;
        cin >> l >> r;
        if (r < 4)
        {
            cout << -1 << '\n';
        }
        else if (l != r || r % 2 == 0)
        {
            if (r % 2 == 0)
            {
                cout << 2 << " " << r - 2 << '\n';
            }
            else {
                cout << 2 << " " << r - 3 << '\n';
            }
        }
        else {
            bool ok = true;
            for (int i = 3;i <= r / i;i += 2)
            {
                if (r % i == 0)
                {
                    int x = r / i;
                    cout << x << ' ' << r - x << '\n';
                    ok = false;
                    break;
                }
            }
            if (ok)
                cout << -1 << endl;
        }
    }

    return 0;
}

