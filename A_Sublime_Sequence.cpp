#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        int x,n;
        cin >> x >> n;
        if(n%2 == 0)
            cout << 0 << endl;
        else
            cout << x << endl;
    }
    return 0;
}