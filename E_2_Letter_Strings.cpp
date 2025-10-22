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
        long long int ans = 0;
        int n;
        cin >> n;
        unordered_map<string, int>un_mp;
        for (int i = 0;i < n;i++)
        {
            string a;
            cin >> a;
            for (int j = 'a';j <= 'k';j++)
            {
                if (a[0] == j) continue;
                string tem = a;
                tem[0] = j;
                auto it = un_mp.find(tem);
                if (it != un_mp.end())
                {
                    ans += it->second;
                }

            }

            for (int j = 'a';j <= 'k';j++)
            {
                if (a[1] == j) continue;
                string tem = a;
                tem[1] = j;
                auto it = un_mp.find(tem);
                if (it != un_mp.end())
                {
                    ans += it->second;
                }

            }
            un_mp[a]++;

        }

        cout << ans << "\n";

    }
    return 0;
}







