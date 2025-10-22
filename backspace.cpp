#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string ans = "";
    for(char c:s)
    {
        if(c == '<')
        {
            if(!ans.empty())
            {
                ans.pop_back();
            }
        }else{
            ans.push_back(c);
        }
    }
    cout << ans << "\n";

    return 0;
}