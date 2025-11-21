#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n,k,r;
    cin >> n >> k >> r;
    n = n - k;
    cout << n * r << endl;
    return 0;
}