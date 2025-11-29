#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int maxN = (1LL << 15);
vector<int> allPailindrome;

bool isPailindrome(int n)
{
    string s = to_string(n);
    int len = s.size();
    for (int i = 0;i < len / 2;i++)
    {
        if (s[i] != s[len - i - 1])
            return false;
    }
    return true;
}

void addAllPailindrome()
{
    for (int i = 0;i < maxN;i++)
    {
        if (isPailindrome(i))
            allPailindrome.push_back(i);
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    addAllPailindrome();
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int>v(n), cnt(maxN+1);
        for (int i = 0;i < n;i++)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }

        ll ans = n;
        for (int i = 0;i < n;i++)
        {
            for (int j = 0;j < allPailindrome.size();j++)
            {
                int curr = (v[i] ^ allPailindrome[j]);
                ans += cnt[curr];
            }
        }
        cout << ans / 2 << nl;
    }

    return 0;
}