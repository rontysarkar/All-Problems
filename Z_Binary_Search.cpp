#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v;
    for (int i = 0;i < n;i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0;
        int r = n - 1;
        bool found = false;
        while (l <= r)
        {
            int mid = (r + l) / 2;
            if (v[mid] == x)
            {
                found = true;
                break;
            }
            else if (v[mid] > x)
            {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        if (found)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}