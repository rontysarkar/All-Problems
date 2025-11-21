#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int smailDiv(int n)
{
    for (int i = 2;i <= n / i;i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }

    return n;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        int x = 2;
        for (int i = 0;i < 1;i++)
        {
            for (int j = 0;j < m;j++)
            {
                arr[i][j] = x;
                x++;
            }
        }
        for (int i = 1;i < n;i++)
        {
            for (int j = 0;j < m;j++)
            {
                while (arr[i - 1][j] % smailDiv(x) == 0 || x % arr[i - 1][j] == 0)
                {
                    x++;
                }
                arr[i][j] = x;
                x++;
            }
        }
        for (int i = 0;i < n;i++)
        {
            for (int j = 0;j < m;j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}