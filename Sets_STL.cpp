#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    set<int> s;
    while (q--)
    {
        int y, x;
        cin >> y >> x;
        if (y == 1)
            s.insert(x);
        else if (y == 2)
        {
            auto it = s.find(x);
            if (it != s.end())
            {
                s.erase(it);
            }
        }
        else {
            auto it = s.find(x);
            if (it != s.end())
                cout << "Yes" << "\n";
            else
                cout << "No" << "\n";
        }
    }
    return 0;
}