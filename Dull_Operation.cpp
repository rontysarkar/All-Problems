#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int div(int n)
{
    int divisor;
    for (int i = 1;i <= n / i;i += 2)
    {
        if (n % i == 0)
        {
            divisor = i;
        }
    }
    return divisor;
}

pair<int, int> getXor(int n)
{
    int pos = __lg(n);
    int x = (1 << pos);
    int y = (x ^ n);
    return { x,y };
}

pair<int, int> getOr(int n)
{
    int pos = __lg(n);
    int x = (1 << pos);
    int y = (x | n);
    return { x,y };
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int div1 = div(n);
        int div2 = n / div1;
        auto [x1, y1] = getXor(div1);
        auto [x2, y2] = getXor(div2);
        auto [x3, y3] = getOr(div1);
        auto [x4, y4] = getOr(div2);
        cout << x3 << " " << y3 << nl;
        // cout << x4 << " " << y4 << nl;

        if ((x1 | y1) * (x1 ^ y1) == n)
        {
            cout << x1 << " " << y1 << nl;
        }
        else if ((x2 | y2) * (x2 ^ y2) == n)
        {
            cout << x2 << " " << y2 << nl;
        }
        else if ((x3 | y3) * (x3 ^ y3) == n)
        {
            cout << x3 << " " << y3 << nl;
        }
        else if ((x4 | y4) * (x4 ^ y4) == n)
        {
            cout << x4 << " " << y4 << nl;
        }


    }

    return 0;
}