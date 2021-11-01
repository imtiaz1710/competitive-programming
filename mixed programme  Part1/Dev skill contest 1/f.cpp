#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int m,n;
    cin>>m>>n;
    while (m || n){
        int cnt=0;
        int a[m],b[n];
        for (int i = 0; i < m; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < m; i++)
        {
            auto it=lower_bound(b,b+n,a[i]);
            if(it!=b+n && *it==a[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        
        cin>>m>>n;
        
    }
    
    return 0;
}