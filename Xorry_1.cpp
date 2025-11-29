
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x;
        cin >> x;
        int bitpos = __lg(x);
        int a = (1 << bitpos);
        int b = (x ^ a);
        cout << b << " " << a << endl;

    }

    return 0;
}


















// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl '\n'


// int main() {
//     ios_base::sync_with_stdio(0); cin.tie(0);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n;
//         cin >> n;
//         int a = n-1;
//         int mn = INT_MAX;
//         for (int i = a;i >= 0;i--)
//         {
//             cout << n << "^" << i << " > " << (n ^ i) << nl ;
//             cout << "dife " << i - (n ^ i) << nl;
//             mn = min(mn,abs(i - (n ^ i)));
//             cout << "min >" << mn << nl;
//             cout << nl;
//         }

//     }

//     return 0;
// }