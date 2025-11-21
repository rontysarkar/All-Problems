#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;
    
    ll ans = 0;
    ll dibA = n/a,dibB = n/b,both = 0,lcm;
    lcm = (a*b)/ __gcd(a,b);
    both = n/lcm;
    ans += (dibA-both)*p;
    ans += (dibB-both)*q;
    ans += max((both*p),(both*q));
    cout << ans << '\n';
    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int LCM(int a,int b)
// {
//     return (a / __gcd(a,b)) * b;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0);

//     ll n,a,b,p,q;
//     cin >> n >> a >> b  >> p >> q;
//     ll both = n/LCM(a,b);
//     ll ans = (((n/a)-both)*p) + (((n/b)-both)*q) + (both * max(p,q));
//     cout << ans << '\n';
//     return 0;
// }