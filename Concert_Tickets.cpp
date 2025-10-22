#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    multiset<int>ml;
    for (int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        ml.insert(-x);
    }

    while (m--)
    {
        int c;
        cin >> c;
        auto it = ml.lower_bound(-c);
        if (it != ml.end())
        {
            cout << -*it << "\n";
            ml.erase(it);
        }
        else {
            cout << -1 << "\n";
        }

    }


    return 0;
}