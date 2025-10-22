#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(26,0);
    string s;
    cin >> s ;

    for(char c :s)
    {
        v[c - 'a']++;
    }

    int val = -1;

    for(int i =0;i<26;i++)
    {
        if(v[i] == 0)
        {
            val = i;
            break;
        }
        
    }
    if(val == -1)
        cout << "None";
    else
        cout << char(val+'a');
    
    return 0;
}