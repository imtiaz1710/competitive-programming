#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int div=a/b;
        int res=b*div;
        int rem=a-res;
        
        if(rem>=b/2) res=res+b/2;
        else res=res+rem;
        cout<<res<<endl;
        
    }
    
    
    return 0;
}