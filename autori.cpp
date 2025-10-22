#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,ss;
    cin >> s ;

    for(char c : s)
    {
        if('A' <= c && c <= 'Z')
            ss.push_back(c);
    }
    cout << ss;
    return 0;
}