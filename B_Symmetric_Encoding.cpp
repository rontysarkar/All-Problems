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
        int n;string s, r;
        vector<int> v(26, 0);
        cin >> n >> s;
        for (char c : s)
            v[c - 'a']++;

        for (int i = 0;i < v.size();i++)
            if (v[i] > 0)
                r.push_back(i + 'a');

        int arr[125], sz = r.size(), i = 0, j = r.size() - 1;
        while (sz--)
        {
            arr[r[i]] = r[j];
            i++;
            j--;
        }

        for (int i = 0;i < n;i++)
            s[i] = arr[s[i]];

        cout << s << "\n";

    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;string s,r;
//         cin >> n >> s;
//         r  = s;

//         sort(r.begin(),r.end());
//         r.erase(unique(r.begin(),r.end()),r.end());
//         int arr[125];
//         int sz = r.size();
//         int i =0;
//         int j = r.size()-1;
//         while(sz--)
//         {
//             arr[r[i]] = r[j];
//             i++;
//             j--;
//         }

//         for(int i =0;i<n;i++)
//         {
//             s[i] = arr[s[i]];
//         }
//         cout << s << "\n";

//     }
//     return 0;
// }