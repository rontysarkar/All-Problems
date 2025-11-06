#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int N = 200005;
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> diff(N, 0), Pre_cunt(N, 0);
    while(n--)
    {
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    for (int i = 1;i <=N;i++)
    {
        diff[i] = diff[i-1] + diff[i];
        Pre_cunt[i] = Pre_cunt[i - 1] + (diff[i] >= k);
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << Pre_cunt[r] - Pre_cunt[l - 1] << '\n';
    }
    return 0;
}



