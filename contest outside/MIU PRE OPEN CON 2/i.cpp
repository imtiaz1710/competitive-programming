#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    freopen("in.txt","r",stdin);
    freopen("ou.txt","w",stdout);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll cnt=0;
        for (ll i = n-1; i >= 0; i--)
        {
            if(sum==0) break;
            ll div=sum/a[i];
            if(div>0)
            {
              sum-=(a[i]*div);
              cnt++;
            }
            
        }
        cout<<cnt<<endl;
        
    }
    return 0;
}