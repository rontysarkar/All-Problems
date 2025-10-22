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
        string s;
        cin >> s;

        int i;
        for(i = 1;i<s.size();i++)
        {
            if(s[i-1] == s[i])
                break;
        }

        if(s[i-1] == 'a')
        {
            s.insert(s.begin()+i,'b');
        }else{
            s.insert(s.begin()+i,'a');
        }

        cout << s << "\n";
    }
    return 0;
}