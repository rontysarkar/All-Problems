#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool isHiss = false;
    for(int i =1;i<s.size();i++)
    {
        if(s[i] == 's' && s[i-1] == 's')
        {
            isHiss = true;
            break;
        }
            
    }

    if(isHiss)
        cout << "hiss";
    else
        cout << "no hiss";
    return 0;
}