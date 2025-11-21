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
        vector<int> v(n + 1);
        for (int i = 1;i <= n;i++)
        {
            cin >> v[i];
        }
        int odd = 0, even = 0;
        for (int i = 1;i <= n;i++)
        {
            if (i % 2 == 0)
            {
                if (v[i] == 1)
                    even++;
            }
            else {
                if (v[i] == 1)
                    odd++;
            }
        }
        if (even == 0 || odd == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}