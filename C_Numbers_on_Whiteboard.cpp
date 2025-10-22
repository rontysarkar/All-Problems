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
        if (n == 2)
        {
            cout << 2 << "\n";
            cout << 1 << " " << 2 << "\n";
        }
        else {
            vector<int> v(n + 1);
            v[n - 1] = round((n + (n - 2)) / 2);
            cout << 2 << "\n";
            cout << n - 2 << " " << n << "\n";
            for (int i = n - 1;i > 1;i--)
            {
                if (i == n - 1)
                {
                    cout << v[i] << " " << v[i] << "\n";
                    v[i - 1] = round((v[i] + v[i]) / 2);

                }
                else {
                    cout << v[i] << " " << i - 1 << "\n";
                    v[i - 1] = round((v[i] + i) / 2);
                }
            }
        }
    }
    return 0;
}