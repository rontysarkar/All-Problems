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
        vector<int> v(n+1);
        set<int> s;
        for(int i =1;i<=n;i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
       
        int l =1,r = n;
        bool isExist = false;
        while(l<r)
        {
            auto mn = *s.begin(),mx = *--s.end();
            if(v[l] != mn && v[l] != mx && v[r] != mn && v[r] != mx)
            {
                isExist = true;
                break;
            }
            if(v[l] == mn || v[l] == mx)
            {
                s.erase(v[l]);
                l++;
            }

            if(v[r] == mn || v[r] == mx)
            {
                s.erase(v[r]);
                r--;
            }
        }

        if(isExist)
        {
            cout << l << " " << r << "\n";
        }else{
            cout << -1 << "\n";
        }

    }
    return 0;
}