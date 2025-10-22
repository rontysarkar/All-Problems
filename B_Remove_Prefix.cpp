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
        cin >>n;
        vector<int> v(200000,0);
        vector<int> v1(n);
        for(int i =0;i<n;i++)
        {
            cin >> v1[i];
            v[v1[i]]++;
        }
        int ans =0;
        
        int j = 0;
        for(int i =0;i<=200000;i++)
        {
            while(v[i] > 1)
            {
                v[v1[j]]--;
                j++;
            }
        }
        cout << j << "\n";
    }
    return 0;
}