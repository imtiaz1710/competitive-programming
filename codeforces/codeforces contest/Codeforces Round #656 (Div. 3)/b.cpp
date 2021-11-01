#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while (n--)
    {
        ll t;
        cin>>t;
        t*=2;
        ll a[t];
        for (ll i = 0; i < t; i++)
        {
            cin>>a[i];
        }
        map <ll,ll> m;
        for (ll i = 0; i < t; i++)
        {
            if(m[a[i]]==0) cout<<a[i]<<" ";
            m[a[i]]++;
        }
        cout<<endl;
        
    }
    
}