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
        int n,k;
        cin >> n >>  k;
        map<int,set<int>> mp;
        for(int i =1;i<=n;i++)
        {
            int x;
            cin >> x;  
            mp[x].insert(i);
        }
        
        for(int i =0;i<k;i++)
        {
            int a,b;
            cin >>a >> b;
            auto ita = mp.find(a);
            auto itb = mp.find(b);
            if(ita != mp.end() && itb != mp.end()){
                if(*ita->second.begin()<*itb->second.rbegin())
                {
                    cout << "YES" << "\n";
                }else{
                    cout << "NO" << "\n";
                }
            }else{
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}