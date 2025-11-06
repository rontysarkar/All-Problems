#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n >> q;
    vector<long long int> arr(n+1);
    vector<long long int> prefix(n+1);
    for(int i =1;i<=n;i++)
    {
        cin >> arr[i];
    }
    for(int i =1;i<=n;i++)
    {
        prefix[i] = prefix[i-1]+arr[i];
    }
    
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << "\n";
    }
    return 0;
}