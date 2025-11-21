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
        ll ans = 0;
        int one = 0, two = 0, three = 0;
        for (int i = 0;i < n;i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                one++;
            else if (x == 2)
                two++;
            else {
                three++;
            }
        }
        if (three == one || three > one)
        {
            ans += one;
        }
        else if (one > three)
        {
            ans += three;
        }

        if (two > 1)
        {
            ans += two - 1;
        }

        cout << ans << endl;
    }

    return 0;
}