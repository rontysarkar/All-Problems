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
        int n, k;
        cin >> n >> k;
        map<string, int>mp;
        for (int i = 0;i < n;i++)
        {
            string s;
            cin >> s;
            mp[s]++;
        }
        string x = "";
        for (int i = 0;i < k;i++)x.push_back('0');
        bool ok = true;
        for (int i = 0;i < k;i++)
        {
            x[i] = '1';
            if (mp.find(x) == mp.end())
            {
                ok = false;
                break;
            }
            x[i] = '0';
        }
        
        if (ok)cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}