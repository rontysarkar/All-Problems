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
        if (n <= 2) {
            cout << 1 << endl;
            continue;
        }
        else if (n <= 4)
        {
            cout << 2 << endl;
            continue;
        }
        int msb = __lg(n);
        int ans = (1 << msb - 1);
        ans = max(ans, ((n - (1 << msb)) + 1));
        cout << ans << endl;
        

    }

    return 0;
}