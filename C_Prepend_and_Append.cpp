#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        string s;
        cin >> n >> s;
        int l = 0, r = n - 1, cnt = 0;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                cnt += 2;
                l++;
                r--;
            }
            else {
                break;
            }

        }

        cout << s.size() - cnt << endl;
    }
    return 0;
}