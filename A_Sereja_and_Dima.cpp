#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0;i < n;i++)
    {
        cin >> dq[i];
    }

    int serejaPoint = 0;
    int dimaPoint = 0;

    for (int i = 0;i < n;i++)
    {
        if (i % 2 == 0)
        {
            if (dq.front() > dq.back())
            {
                serejaPoint += dq.front();
                dq.pop_front();
            }
            else {
                serejaPoint += dq.back();
                dq.pop_back();
            }
        }
        else {
            if (dq.front() > dq.back())
            {
                dimaPoint += dq.front();
                dq.pop_front();
            }
            else {
                dimaPoint += dq.back();
                dq.pop_back();
            }
        }
    }

    cout << serejaPoint << " " << dimaPoint << "\n";
    return 0;
}