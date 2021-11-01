#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    while (n)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int cnt=0;
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            cnt+=a[i];
            ans+=cnt;
        }
        cout<<ans-a[0]<<endl; 
        
        cin>>n;
    }
    
    return 0;
}