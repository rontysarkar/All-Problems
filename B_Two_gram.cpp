#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;string s;
    cin >> n >> s;
    map<string,int> mp;
    vector<pair<int,string>> v;
    for(int i =0;i<n-1;i++)
    {
        mp[s.substr(i,2)]++;
    }

    for(auto [s,i] : mp)
    {
        v.push_back({i,s});
    }

    sort(v.begin(),v.end(),[](const pair<int,string> &a,const pair<int,string> &b){
        if(a.first == b.first)
            return a.second < b.second;
        else
            return a.first > b.first;
    });
    
    cout << v[0].second << "\n";
    
    return 0;
}