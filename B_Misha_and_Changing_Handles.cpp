#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map <string, string> ans, has;

    for (int i = 0;i < n;i++)
    {
        string a, b;
        cin >> a >> b;

        if (has.find(a) != has.end())
        {
            string s = has[a];
            ans[s] = b;
            has.erase(a);
            has[b] = s;
        }
        else
        {
            ans[a] = b;
            has[b] = a;
        }

    }

    cout << ans.size() << "\n";
    for(auto [a,b] : ans)
    {
        cout << a << " " << b <<"\n";
    }
    return 0;
}