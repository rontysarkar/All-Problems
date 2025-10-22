// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int tc;
//     cin >> tc;

//     while(tc--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int ans = 0;
//         int tmp = 0;
//         int b = 0;
//         for(int i =0;i<n;i++)
//         {
//             if(s[i] == 'B')
//             {
//                 tmp++;
//                 ans += tmp;
//                 tmp = 0;
//                 b = 1;
//             }else if(b == 1)
//             {
//                 tmp++;
//             }

//         }
//         cout << ans << "\n";
        
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int firstPos = -1,lastPos = -1;
        firstPos = s.find('B');
        lastPos = s.rfind('B');
        cout << lastPos - firstPos + 1 << "\n";
    }
    return 0;
}