#include <bits/stdc++.h>
#define ll long long
using namespace std;
    
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a<b) swap(a,b);
        cout<<min(b,(a+b)/3)<<endl;
        
        
    }
    
}