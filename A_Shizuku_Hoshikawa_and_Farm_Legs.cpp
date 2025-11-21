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
        cin >> n ;
        if(n % 2 != 0)
        {
            cout << 0 << endl;
        }else{
            int ans = n/4;
            cout << ans+1 << endl;
        }
    }
    
    return 0;
}