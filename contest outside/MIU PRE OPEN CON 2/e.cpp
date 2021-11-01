#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        int c=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] <= 0)
            c++;
        }
        if(c<k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}