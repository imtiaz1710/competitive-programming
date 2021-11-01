#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        int res[n+1];
        
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
            
        }
        
        for (int i = 1; i <= n; i++)
        {
            int pos=a[i];
            int ans=1;
            while (pos!=i)
            {
                pos=a[pos];
                ans++;
            }
            res[i]=ans;;
            
        }
        
        for (int i = 1; i <=n; i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        
        
        
    }
    
    return 0;
}