#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<pair<int,int>,string> mp;
    for(int i =0;i<n;i++)
    {
        int a,b;string s;
        cin >> a >> b >> s;
        mp[{a,b}]  = s;
    }
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        cout << mp[{a,b}] << "\n";
    }
    return 0;
}