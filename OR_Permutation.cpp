#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define br '\n'


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        for(int i = n;i >=1;i--)
            cout << i << " ";
        cout << br;
    }
    
    return 0;
}