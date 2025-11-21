#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    ll sum = 0, mx = -1,gcd = 0;
    vector<int>v(n);
    for (int i = 0;i < n;i++)
    {
        ll a;
        cin >> a;
        mx = max(mx, a);
        v[i] =a;
    }
    for(int i =0;i<n;i++)
    {
        gcd = __gcd(gcd,mx-v[i]);
        sum += mx-v[i];
    }
    
    cout << sum/gcd << " " << gcd << endl;
    return 0;
}