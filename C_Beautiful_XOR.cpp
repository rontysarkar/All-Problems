
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
        int a, b;
        cin >> a >> b;
        int msbA = __lg(a);
        int msbB = __lg(b);
        if (a == b)
        {
            cout << 0 << nl;
            continue;
        }
        if (msbB > msbA)
        {
            cout << -1 << nl;
            continue;
        }

        int x = a ^ ((1 << msbA + 1) - 1);
        if (x != 0) {
            cout << 2 << nl;
            cout << x << " ";
        }
        else {
            cout << 1 << nl;
        }
        x = (b ^ ((1 << msbA + 1) - 1));
        cout << x << " " << nl;

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
//         int a, b;
//         cin >> a >> b;
//         int msbA = __lg(a);
//         int msbB = __lg(b);
//         if (a == b)
//         {
//             cout << 0 << nl;
//             continue;
//         }
//         if (msbB > msbA)
//         {
//             cout << -1 << nl;
//             continue;
//         }
//         if (msbA > msbB || a > b) {
//             cout << 2 << nl;
//             int x = a;
//             a = a ^ x;
//             cout << x << " ";
//             x = b;
//             a = a ^ x;
//             cout << x << " " << nl;
//         }
//         else {
//             cout << 3 << nl;
//             int x = a;
//             a = a ^ x;
//             cout << x << " ";
//             x = b - (1 << msbA);
//             a = a ^ x;
//             cout << x << " ";
//             x = msbA;
//             a = a ^ x;
//             cout << x << " " << nl;
//         }
//     }

//     return 0;
// }