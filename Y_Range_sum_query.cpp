#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;cin >> n >> q;
    long long int arr[n+1] = {0};
    for(int i =1;i<=n;i++)
    {
        long long int val;
        cin >> val;
        arr[i] = arr[i-1] +val;
    }
    
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << arr[r] - arr[l-1] << endl;
    }
    return 0;
}