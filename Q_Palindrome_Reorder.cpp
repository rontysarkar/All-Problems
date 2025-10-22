#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<int>freq(26, 0);
    for (char c : s)
    {
        freq[c - 'A']++;
    }

    int oddCount = 0;
    char oddChar;
    for (int i = 0;i < 26;i++)
    {
        if (freq[i] % 2 != 0)
        {
            oddCount++;
            oddChar = i + 'A';
        }
    }

    if (oddCount > 1)
    {
        cout << "NO SOLUTION" << "\n";
    }
    else {
        string s1 = "";
        for (int i = 0;i < 26;i++)
        {
            s1 += string(freq[i] / 2, i + 'A');
        }

        string palindrome = s1;
        if (oddCount == 1)
            palindrome += oddChar;

        reverse(s1.begin(), s1.end());
        palindrome += s1;
        cout << palindrome << "\n";
    }

    return 0;
}

























// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s;
//     vector<int> v(26, 0);
//     for (int i = 0;i < s.size();i++)
//     {
//         v[s[i] - 'A']++;
//     }
//     char m = -1;
//     bool isPos = true;
//     string s1 = "";
//     for (int i = 0;i < s.size();i++)
//     {
//         if (v[i] > 0)
//         {
//             if (v[i] % 2 != 0 && m == -1)
//             {
//                 m = char(i + 'A');
//                 v[i]--;
//             }
//             else if (v[i] % 2 != 0 && m != -1)
//             {
//                 isPos = false;
//             }
//             else {
//                 s1 += string(v[i] / 2, i + 'A');
//             }
//         }
//     }

//     string palindrome = s1;
//     if (m != -1)
//     {
//         palindrome += string(1, char(m));
//     }
//     reverse(s1.begin(), s1.end());
//     palindrome += s1;
//     if (isPos)
//     {
//         cout << palindrome << "\n";
//     }
//     else {
//         cout << "NO SOLUTION" << "\n";
//     }
//     return 0;
// }