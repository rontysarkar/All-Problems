#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, x, y, sum = 0, ans = 0;
        cin >> n >> x >> y;
        vector<int> v(n + 1);
        for (int i = 1;i <= n;i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin()+1, v.end());
        for (int i = 1;i <= n;i++)
        {
            ll l = i + 1, r = n, left = -1, right = -1;
            while (l <= r)
            {
                ll mid = (l + r) / 2;
                ll remin = (sum - (v[i] + v[mid]));
                if (remin >= x && remin <= y)
                {
                    left = mid;
                    r = mid - 1;
                }
                else if (remin < x)
                {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            l = i + 1, r = n;
            while (l <= r)
            {
                ll mid = (l + r) / 2;
                ll remin = (sum - (v[i] + v[mid]));
                if (remin >= x && remin <= y)
                {
                    right = mid;
                    l = mid + 1;
                }
                else if (remin < x)
                {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }

            if (left != -1 && right != -1)
            {
                ans += (right - left + 1);
            }
        }
        cout << ans << '\n';

    }

    return 0;
}






#include<bits/stdc++.h>
using namespace std;
long long int v[200010];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        long long int x,y,sum=0,ans=0;
        cin>>n>>x>>y;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        sort(v,v+n);
        for(int i=n-1,j=0,k=0;i>=0;i--){
            while((v[j]+v[i])<(sum-y)){
                j++;
            }
            while((v[k]+v[i])<=(sum-x)){
                k++;
            }
            ans+=((min(i,k))-(min(i,j)));
        }
        cout<<ans<<"\n";
    }
    return 0;
}