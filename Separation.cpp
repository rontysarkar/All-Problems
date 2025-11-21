#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,x;
        cin >> n >> x;
        int smail = 0,big = 0, equal = 0;
        for(int i =0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a > x)
            {
                big++;
            }else if(a < x)
            {
                smail++;
            }else{
                equal++;
            }
        }
        if(smail == n || big == n || equal > 0)
        {
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}