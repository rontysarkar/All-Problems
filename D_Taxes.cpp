#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n)
{
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (ll i = 3; i <= n / i;i += 2)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << 1 << endl;
    }
    else if (n % 2 == 0 || isPrime(n - 2))
    {
        cout << 2 << endl;
    }
    else {
        cout << 3 << endl;
    }

    return 0;
}