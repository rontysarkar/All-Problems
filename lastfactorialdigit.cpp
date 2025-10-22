#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int fac = 1;
        cin >> n;

        for(int i =1;i<=n;i++)
        {
            fac *= i;
        }
        cout << fac%10 << endl;
    }

    
    return 0;
}