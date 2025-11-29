#include<bits/stdc++.h>
using namespace std;
#define ll long long



int print_kth_bit(int n,int k)
{
    return ((n >> k)&1);
}

void print_on_of_bit(int n)
{
    for(int i = 7;i>=0;i--)
    {
        cout << print_kth_bit(n,i) << " ";
    }
}

int turn_on_kth_bit(int n,int k)
{
    return (n |(1 << k));
}

int turn_of_kth_bit(int n,int k)
{
    return (n&(~(1 << k)));
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int a = 5, b = 14;
    int ans = 36;
    // cout << turn_on_kth_bit(ans,4) << endl;
    // cout << turn_of_kth_bit(ans,2) << endl;
    print_on_of_bit(ans);
    // cout << print_on_of_bit(ans) << endl;

    return 0;
}

