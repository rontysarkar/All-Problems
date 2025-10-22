#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n >> q;
    vector<priority_queue<int>> v(n);
    while(q--)
    {
        int a,t,x;
        cin >> a >> t;
        if(a == 0)
        {
            cin >> x;
            v[t].push(x);
        }else if(a == 1)
        {
            if(!v[t].empty())
                cout << v[t].top() <<"\n";
        }else{
            if(!v[t].empty())
                v[t].pop();
        }

    }

    return 0;
}