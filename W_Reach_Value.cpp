#include<bits/stdc++.h>
using namespace std;

bool rechValue(long long int val, long long int n)
{
    if (val > n)
        return false;
    if (val == n)
        return true;
    bool op1 = rechValue(val * 10, n);
    bool op2 = rechValue(val * 20, n);
    return op1 || op2;
}

int main()
{
    int tc; cin >> tc;
    while (tc--)
    {
        long long int n;
        cin >> n;
        if (rechValue(1, n))
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}