#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        int a = 0;
        int b = 0;
        cin >> n;
        for (int i = 0;i < n;i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                a++;
            else
                b++;
        }
        int ans = b;
        ans += a / 2;
        if (a % 2 != 0)
            ans++;
        cout << ans << endl;
    }
    return 0;
}