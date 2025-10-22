#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int,int> mp;
        for(int i =0;i<n;i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> ans;
        for(auto [x,y] : mp)
        {
            ans.push(y);
        }

        
        while(ans.size() > 1)
        {
            int a = ans.top();
            ans.pop();
            int b = ans.top();
            ans.pop();
            a--;
            b--;
            if(a != 0)
                ans.push(a);
            if(b != 0)
                ans.push(b);
        }
        if(ans.empty())
            cout << 0 << "\n";
        else
            cout << ans.top() << "\n";
        
    }
    return 0;
}