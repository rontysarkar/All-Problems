#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    multiset<int>ml;
    for (int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    while(q--)
    {
        int t;
        cin >> t;
        if(t== 0)
        {
            int x;
            cin >> x;
            ml.insert(x);
        }else if(t == 1)
        {
            cout << *ml.begin() << "\n";
            ml.erase(ml.begin());
        }else{
            cout << *ml.rbegin() << "\n";
            ml.erase(--ml.end());
        }
    }

    
    return 0;
}