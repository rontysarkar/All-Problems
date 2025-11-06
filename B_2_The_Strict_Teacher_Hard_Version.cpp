#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        set<int>s;

        for (int i = 0;i < m;i++)
        {
            int teacherPos;
            cin >> teacherPos;
            s.insert(teacherPos);
        }

        s.insert(0);
        while(q--)
        {
            int studntPos;
            cin >> studntPos;
            auto rT = s.upper_bound(studntPos);
            auto lT = rT;
  
            --lT;
            
            if(rT == s.end())
            {
                cout << n - *lT << "\n";

            }else if(lT == s.begin())
            {
                cout << *rT - 1 << "\n";
            }else{

                int midle = (*rT - *lT)/2;
                cout << midle << "\n";
            }
            
        }
    }
    return 0;
}