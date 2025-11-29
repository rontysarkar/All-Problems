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
        vector<int>a(n),b(n);
        for(int i = 0;i<n;i++)
            cin >> a[i];
        for(int i = 0;i<n;i++)
            cin >> b[i];
        bool ok = true;
        for(int i = 0;i<n-1;i++)
        {
            if(a[i] == b[i])
            {
                continue;
            }
            if(a[i] < a[i+1] && a[i] >= b[i+1] && b[i] > b[i+1])
            {
                ok = false;
                break;
            }
        }
        if(ok)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }
    
    return 0;
}