#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    multiset<int> ml;
    for(int i =0;i<n;i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    int ans = 0,problem = 1;
    while(!ml.empty())
    {
        auto LB = ml.lower_bound(problem);
        if(LB != ml.end())
        {
            ans++;
            ml.erase(LB);
            problem++;
        }else{
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}



























// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     vector<int> v(n),ans;
//     for(int i =0;i<n;i++)
//     {
//         cin >> v[i];
//     }
//     sort(v.begin(),v.end());
//     for(int x : v)
//     {
//         if(ans.size() < x)
//             ans.push_back(x);
//     }
//     cout << ans.size() << "\n";

//     return 0;
// }