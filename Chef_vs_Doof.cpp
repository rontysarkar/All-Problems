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
        int x = 0;
        for (int i = 0;i < n;i++)
        {
            int a;
            cin >> a;
            if(a % 2 == 0)
            {
                x = 1;
            }
        }
        if (x)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }

    return 0;
}