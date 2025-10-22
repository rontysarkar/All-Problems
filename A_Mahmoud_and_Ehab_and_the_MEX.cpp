#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    int cunt = 0;
    int cuntx = 0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        if(a < x)
            cunt++;
        else if(a == x)
            cuntx++;
    }
    cout << (x-cunt)+cuntx << endl;
    
    return 0;
}

