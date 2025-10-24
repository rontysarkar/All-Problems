#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i =0;i<n;i++) cin >> v[i];
        set<int> s;
        set<int> seg;

        int ans =1;
        s.insert(v[0]);
        for(int i =1;i<n;i++)
        {
            auto it = s.find(v[i]);
            if(it != s.end())
            {
                s.erase(it);
                seg.insert(v[i]);
            }else{
                seg.insert(v[i]);
            }

            if(s.empty())
            {
                ans++;
                s = seg;
                seg.clear();
            }
        }

        cout << ans << '\n';
        
    }
    return 0;
}