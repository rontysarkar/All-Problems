#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int aEven1 = 0, aOdd1 = 0, bEven0 = 0, bOdd0 = 0;
        for (int i = 0;i < n;i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] == '1')
                    aEven1++;
                if (b[i] == '0')
                    bEven0++;
            }
            else {
                if (a[i] == '1')
                    aOdd1++;
                if (b[i] == '0')
                    bOdd0++;
            }
        }

        if (bEven0 >= aOdd1 && bOdd0 >= aEven1)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}
