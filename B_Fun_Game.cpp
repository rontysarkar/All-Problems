#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s,t;
        cin >> s >> t;
        bool ok = true;
        for(int i = 0;i<n;i++)
        {
            if(s[i] == '1')
            {
                ok = true;
                break;
            }

            if(s[i] != t[i])
            {
                ok = false;
                break;
            }
        }

        if(ok)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;

    }
    
    return 0;
}