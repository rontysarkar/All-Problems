#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    deque<int> dq;
    bool isReverse = false;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "toFront")
        {
            int a;cin >> a;
            if (isReverse)
                dq.push_back(a);
            else
                dq.push_front(a);
        }
        else if (s == "push_back")
        {
            int a; cin >> a;
            if (isReverse)
                dq.push_front(a);
            else
                dq.push_back(a);
        }
        else if (s == "front")
        {
            if (!dq.empty())
            {
                if (isReverse)
                {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
                else {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
            }
            else
                cout << "No job for Ada?" << "\n";
        }
        else if (s == "back")
        {
            if (!dq.empty())
            {
                if (isReverse)
                {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
                else {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
            }
            else
                cout << "No job for Ada?" << "\n";
        }else{
            isReverse = !isReverse;
        }
    }
    return 0;
}