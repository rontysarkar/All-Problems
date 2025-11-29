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
        int x,y,z;
        cin >> x >> y >> z;
        int range = abs((x-y)-(x+y));
        int visit = abs((x-z)-(x+z));
        cout << min(range,visit) << nl;
        
    }
    
    return 0;
}