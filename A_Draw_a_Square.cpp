#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int l,r,d,u;
        cin >> l >> r >> d >> u;

        if(l == r && l == d && l == u)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}