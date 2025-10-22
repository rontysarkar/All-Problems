#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    set<pair<int, int>> mono;
    multiset<pair<int, int>> poly;
    int pos = 1;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int m;
            cin >> m;
            poly.insert({ m,-pos });
            mono.insert({ pos,m });
            pos++;
        }
        else if (a == 2)
        {
            int p =mono.begin()->first,m = mono.begin()->second;
            mono.erase(mono.begin());
            poly.erase({m,-p});
            cout << p << " ";
        }
        else {
            int p = -poly.rbegin()->second,m = poly.rbegin()->first;
            poly.erase(--poly.end());
            mono.erase({p,m});
            cout << p <<" "; 
        }

    }
    return 0;
}