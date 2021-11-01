//solved cf b


#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(a==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll tmp=a;
        do
        {
            if (tmp%2==0)
            {
                if(tmp<b)
                {
                    tmp=3*(tmp/2);
                }
                else
                {
                    tmp--;
                }
                
            }
            else
            {
                tmp--;
            }
           cout<<tmp<<endl;
            
        } while (tmp!=a && tmp!=b && tmp<b);
        
        if(tmp==b || tmp>b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
        
        
    }
    
    return 0;
}