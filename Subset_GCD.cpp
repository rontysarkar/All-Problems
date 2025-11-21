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
        ll n,k;
        cin >> n >> k;
        int sum = n/k;
        int cnt = 0;
        while(cnt < k)
        {
            cout << sum << " ";
            sum += n/k;
            cnt++;
        }
       cout << endl;
    }
    return 0;
}
