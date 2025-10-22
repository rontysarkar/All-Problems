#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for(int i = 1;i<n;i++)
    {
        long long int x;
        cin >> x;
        arr[x] = x;
    }

    for(long long int i = 1;i<=n;i++)
    {
        if(arr[i] != i)
            cout << i;
    }
    return 0;
}