#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll sum=0;
    for (ll i = 0; i < n/2; i++)
    {
        int sq=a[i]+a[n-i-1];
        sq*=sq;
        sum+=sq;
    }
    
    cout<<sum<<endl;
}