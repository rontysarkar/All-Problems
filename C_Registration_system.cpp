#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >>n;
    map<string,int> db;
    while(n--)
    {
        string s;
        cin >> s;
        auto it = db.find(s);
        if(it == db.end())
        {
            db[s] = 0;
            cout << "OK" << "\n";
        }else{
            it->second++;
            cout << s << it->second << "\n";
        }
    }
    return 0;
}