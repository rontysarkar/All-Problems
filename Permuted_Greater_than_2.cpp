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
        int x,y,z;
        cin >> x >> y >> z;
        if(z >= x && z != 0)
        {
            cout << "Yes" << endl;
        }else if(x == z + 1 && y == 0)
        {
            cout << "Yes" << endl;
        }else if(x == 0 && y > 1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}