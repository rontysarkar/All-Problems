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
        deque<int> dq;
        for (int i = 0;i < n;i++)
        {
            int a;
            cin >> a;
            if (i == 0)
                dq.push_back(a);
            else {
                if (dq.front() <= a)
                    dq.push_back(a);
                else {
                    dq.push_front(a);
                }
            }
        }

        for(int i : dq)
        {
            cout << i << " ";
        }
        cout << "\n";

    }
    return 0;
}