#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >>n;
        vector<int> v(n+1);
        for(int i =1;i<=n;i++)
        {
            cin >> v[i];
        }

        for(int i =1;i<=n;i++)
        {
            v[i] = n+1 - v[i];
        }
        for(int i =1;i<=n;i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}