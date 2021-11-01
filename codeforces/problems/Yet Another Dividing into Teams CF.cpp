#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        bool f=false;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if(a[i]+1==a[i+1])
            {
                f=true;
                break;
            }
        }
        if (!f)
        {
            cout<<1<<endl;  
        }
        else
        {
            cout<<2<<endl;
        }
        
        

        
    }
    
    return 0;
}