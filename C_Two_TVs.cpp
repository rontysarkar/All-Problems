#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    map<int,int>mp;
    while(n--)
    {
        int l,r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    ll sum = 0;
    bool isPos = true;
    for(auto [k,v]:mp)
    {
        sum += v;
        if(sum > 2)
        {
            isPos = false;
            break;
        }
    }
    if(isPos)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}