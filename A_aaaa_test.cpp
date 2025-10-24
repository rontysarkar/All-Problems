#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >>n ;
    cout << __gcd(12,18);
    // cout << 12%18;
    // for (int i = 1;i * i <= n;i++) {
    //     if (n % i == 0) {
    //         cout << i << " ";       // i is divisor
    //         // if (i != n / i) cout << n / i << " ";  // paired divisor
           
    //     }
    // }
    return 0;
}