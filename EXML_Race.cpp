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
        vector<pair<int,int>>v;
        for(int i = 1;i<=n;i++)
        {
            int m,s;
            cin >> m >> s;
            v.push_back({m/s,-i});
        }
        sort(v.begin(),v.end());
        cout << -v[n-1].second << endl;
    }
    
    return 0;
}