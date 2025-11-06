#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string txt = "ju", pat = "po";

    int n = txt.size(), k = pat.size();
    vector<int> v1(26),tmp(26);

    for (char c : pat)
    {
        v1[c - 'a']++;
    }

    int l = 0, r = 0, ans = 0;
    while (r < n)
    {
        tmp[txt[r] - 'a']++;
        if(r - l + 1 == k)
        {
            if(tmp == v1)
            {
                ans++;
            }
            tmp[txt[l] - 'a']--;
            l++;
            r++;
        }else{
            r++;
        }
    }
    cout << ans ;

    return 0;
}

