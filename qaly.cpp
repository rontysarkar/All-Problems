#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double qaly = 0;

    for(int i =0;i<n;i++)
    {
        double x,y;
        cin >> x >> y;
        qaly += x*y;
    }
    cout << fixed << setprecision(3) << qaly;
    return 0;
}