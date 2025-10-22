#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int screen = 0;
        screen += y / 2;
        if (y % 2 != 0)
            screen++;

        int reminCel = (screen * 15 - y * 4) - x;
        if (reminCel < 0)
        {
            screen += abs(reminCel) / 15;
            if (abs(reminCel) % 15 != 0)
                screen++;
        }

        cout << screen << endl;
    }
    return 0;
}