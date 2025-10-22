#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt0 = 0; int cnt1 = 0;
        for (int i = 0;i < n;i++)
        {
            if (s[i] == '1')
                cnt1++;
            else
                cnt0++;
        }
        int ans = (cnt1 * n) - cnt1;
        cout << ans + cnt0 << endl;
    }



    return 0;
}