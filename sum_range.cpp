#include<bits/stdc++.h>
using namespace std;

int rangeSum(int n)
{
    return ((n*(n+1))/2);
}

int Sum(int l,int r)
{
    int right = rangeSum(r);
    int left = rangeSum(l-1);
    return right - left;
}

int main()
{
    int n,l,r,x,y;
    cin >> n ;
    int arr[n];

    for(int i =1;i<=n;i++)
    {
        cin >> arr[i];
    }
    cin >> l >> r;
   
    x = ((l+1)/2);
    y = ((r+1)/2);

    int ans = (2*Sum(x,y));

    if(l%2 == 0)
    {
        ans -= x;
    }

    if(r%2 != 0)
    {
        ans -= y;
    }
    cout << ans;
    
    
    
    return 0;
}