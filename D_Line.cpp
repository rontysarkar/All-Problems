
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long int total = 0;
        long long int val[n];
        priority_queue<pair<long long int, long long int>> pq;
        for (int i = 0;i < n;i++)
        {
            if (s[i] == 'L')
            {
                total += i;
                val[i] = i;
            }
            else {
                total += n - i - 1;
                val[i] = n - i - 1;
            }
        }



        for (int i = 0;i < n;i++)
        {

            if (s[i] == 'L')
            {
                long long int oldV = val[i];
                long long int newV = n - i - 1;
                if (newV > oldV)
                {
                    pq.push({ newV,oldV });
                }
            }
            else {
                long long int oldV = val[i];
                long long int newV = i;
                if (newV > oldV)
                {
                    pq.push({ newV,oldV });
                }
            }
        }

        for (int i = 0;i < n;i++)
        {
            if (!pq.empty())
            {
                long long int newVal = pq.top().first;
                long long int oldVal = pq.top().second;
                pq.pop();
                total -= oldVal;
                total += newVal;
            }
            cout << total << " ";
        }
        cout << "\n";

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
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         long long int total = 0;
//         for (int i =0;i<n;i++)
//         {
//             if(s[i] == 'L')
//                 total += i;
//             else 
//                 total += n-i-1;
//         }

//         int loop = n ,i =0,j = n-1, tmp = 1;
//         while(loop--)
//         {

//             if(tmp == 1)
//             {
//                 if(s[i] == 'L')
//                 {
//                     int oldV = i;
//                     int newV = n-i-1;
//                     if(newV > oldV)
//                     {
//                         total = (total-oldV)+newV;
//                     }
//                 }
//                 i++;
//                 tmp = 0;
//             }else{

//                 if(s[j] == 'R')
//                 {
//                     int oldV =n-j-1;
//                     int newV = j;
//                     if(newV > oldV)
//                     {
//                         total = (total-oldV)+newV;
//                     }
//                 }

//                 j--;
//                 tmp = 1;
//             }

//             cout << total << " ";
//         }

//         cout << "\n";

//     }
//     return 0;
// }