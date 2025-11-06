#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n;i++) cin >> v[i];

    int l = 0, r = n - 1;
    ll lSum = v[l], rSum = v[r], ans = 0;
    while (l < r)
    {
        if (lSum == rSum)
        {
            ans = max(ans, rSum);
            l++;
            r--;
            if (l < r) {
                lSum += v[l];
                rSum += v[r];
            }
        }
        else if (lSum < rSum)
        {
            l++;
            if (l < r)  lSum += v[l];
        }
        else if (lSum > rSum)
        {
            r--;
            if (l < r) rSum += v[r];
        }
    }
    cout << ans << '\n';
    return 0;
}