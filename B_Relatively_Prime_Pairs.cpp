#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll l,r;
    cin >> l >> r;
    ll pair = (r - l+1)/2;
    if(pair == 0)
    {
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        ll i = l;
        while(pair--)
        {
            cout << i << " " << i+1 << endl;
            i += 2;
        }
    }

    return 0;
}