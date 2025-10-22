#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    deque<int>dq;
    bool isReverse = false;
    for (int i = 0;i < n;i++)
    {
        int a;
        cin >> a;
        if (isReverse)
        {
            dq.push_front(a);
            isReverse = !isReverse;
        }

        else
        {
            dq.push_back(a);
            isReverse = !isReverse;
        }

    }

    if (isReverse)
    {
        reverse(dq.begin(), dq.end());
    }

    for (int x : dq)
    {
        cout << x << " ";
    }
    return 0;
}