#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;
    while (tc--)
    {
        long long int l, r;
        cin >> l >> r;
        long long int mn_l, mx_r;
        mn_l = min(l, r);
        mx_r = max(l, r);

        long long int sum = (mx_r * (mx_r + 1)) / 2 - (mn_l * (mn_l - 1)) / 2;
        cout << sum << endl;
    }
    return 0;
}