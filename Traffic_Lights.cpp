#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;
    cin >> n >> x;
    set<int> pos;
    multiset<int> len;
    pos.insert(0);
    pos.insert(n);
    len.insert(n);
    while(x--)
    {
        int in;
        cin >> in;
        auto it1=pos.lower_bound(in);
        auto it2=it1;
        it2--;
        len.erase(len.find(*it1-*it2));
        len.insert(*it1-in);
        len.insert(in-*it2);
        cout << *--len.end() << " ";
        pos.insert(in);
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, x;
//     cin >> n >> x;
//     map<int, pair<int, int>>mp1;
//     map<int, pair<int, int>>mp2;
//     multiset<int> ml;
//     for (int i = 0;i < x;i++)
//     {
//         int y;
//         cin >> y;

//         auto it1 = mp1.upper_bound(y);
//         auto it2 = mp2.upper_bound(-y);
//         if (it1 == mp1.end())
//         {
//             if (it2 == mp2.end()) {
//                 mp1[y] = { y,n - y };
//                 mp2[-y] = { y,n - y };
//                 ml.insert(n - y);
//                 ml.insert(y);
//                 cout << *ml.rbegin() << " ";
//             }
//             else {
//                 int a = -it2->first;
//                 mp1[y] = { (y - a),n - y };
//                 mp2[-y] = { (y - a),n - y };
//                 ml.insert(y - a);
//                 ml.insert(n - y);
//                 auto findI = ml.find(it2->second.second);
//                 if (findI != ml.end())
//                     ml.erase(findI);

//                 it2->second.second = y - a;
//                 cout << *ml.rbegin() << " ";
//             }

//         }
//         else {
//             if (it2 == mp2.end())
//             {
//                 int a = it1->first;
//                 mp1[y] = { y,a - y };
//                 mp2[-y] = { y,a - y };
//                 ml.insert(y);
//                 ml.insert(a - y);
//                 auto findI = ml.find(it1->second.first);
//                 if (findI != ml.end())
//                     ml.erase(findI);

//                 it1->second.first = a - y;
//                 cout << *ml.rbegin() << " ";
//             }
//             else {


//                 int a = it1->first;
//                 int b = -it2->first;
//                 mp1[y] = { y - b,a - y };
//                 mp2[-y] = { y - b,a - y };

//                 ml.insert(y - b);
//                 ml.insert(a - y);
//                 auto findIt1 = ml.find(it1->second.first);
//                 if (findIt1 != ml.end())
//                     ml.erase(findIt1);
//                 it1->second.first = a - y;

//                 it2->second.second = y - b;
//                 cout << *ml.rbegin() << " ";
//             }
//         }

//     }


//     return 0;
// }